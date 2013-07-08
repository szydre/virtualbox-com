#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <dlfcn.h>
#include <stdint.h>

#include <ruby.h>
#include <ruby/encoding.h>

#include "../types.h"

#define VBOX_APP_HOME 		"VBOX_APP_HOME"
#define VBOX_XPCOMC_VERSION     0x00020000U


/*======================================================================
 * Define basic structure and functions necessary to init XPCom 
 * Open dynamic library and retrieve XPCOM functions
 *======================================================================*/

#if defined(__linux__) || defined(__linux_gnu__) || \
    defined(__sun__) || defined(__FreeBSD__)
# define VBOX_DYNLIB_NAME    "VBoxXPCOMC.so"
#elif defined(__APPLE__)
# define VBOX_DYNLIB_NAME    "VBoxXPCOMC.dylib"
#elif defined(_MSC_VER) || defined(__OS2__)
# define VBOX_DYNLIB_NAME    "VBoxXPCOMC.dll"
#else
# error "Need to be ported to this platform"
#endif


#if defined(__OS2__)
# define VBOX_GET_XPCOMC_FUNCTIONS_SYMBOL_NAME   "_VBoxGetXPCOMCFunctions"
#else
# define VBOX_GET_XPCOMC_FUNCTIONS_SYMBOL_NAME   "VBoxGetXPCOMCFunctions"
#endif


static char *VBoxHome[] = {
#if defined(__gnu__linux__) || defined(__linux__)
    "/opt/VirtualBox",
    "/usr/lib/virtualbox",
#elif defined(__sun__)
    "/opt/VirtualBox/amd64",
    "/opt/VirtualBox/i386",
#elif defined(__APPLE__)
    "/Application/VirtualBox.app/Contents/MacOS",
#elif defined(__FreeBSD__)
    "/usr/local/lib/virtualbox",
#endif
    NULL
};


static VBOX_XPCOMC virtualbox_load(char *home, void **dl_ptr) {
    char *path      = NULL;
    void *dl        = NULL;
    void *sym       = NULL;
    void *funcs     = NULL;

    /* Deal with environment variable */
    if (home) { setenv(VBOX_APP_HOME, home, 1); } 
    else      { unsetenv(VBOX_APP_HOME);        }

    /* Build library full path */
    if (home) {
	size_t len = strlen(home) + 1 + sizeof(VBOX_DYNLIB_NAME);
	path = malloc(len+1);
	snprintf(path, len+1, "%s/%s", home, VBOX_DYNLIB_NAME);
    }

    /* Open lib */
    if (! (dl = dlopen(path, RTLD_NOW | RTLD_LOCAL)))
	goto failed;

    /* Retrieve symbole */
    if (! (sym = dlsym(dl, VBOX_GET_XPCOMC_FUNCTIONS_SYMBOL_NAME))) {
	rb_warn("dlsym(%s/%s): %s", 
		path, VBOX_GET_XPCOMC_FUNCTIONS_SYMBOL_NAME, dlerror());
	goto failed;
    }
    
    /* Retrieve vbox xpcomc functions */
    if (! (funcs = ((VBOX_GET_XPCOMC_FUNCTIONS)sym)(VBOX_XPCOMC_VERSION))) {
	rb_warn("%s: pfnGetFunctions(%#x) failed", path, VBOX_XPCOMC_VERSION);
	goto failed;
    }

    /* Returns */
    free(path);
    if (*dl_ptr) *dl_ptr = dl;
    return funcs;

 failed:
    if (dl  ) dlclose(dl);
    if (path) free(path);
    return NULL;
}

static VBOX_XPCOMC virtualbox_init(void **dl_ptr) {
    char  *home    = getenv(VBOX_APP_HOME);
    char **hlist   = VBoxHome;

    if (home)
        return virtualbox_load(home, dl_ptr);

    while ((home = *hlist++)) {
	VBOX_XPCOMC xpcom = virtualbox_load(home, dl_ptr);
	if (xpcom) return xpcom;
    }

    return virtualbox_load(NULL, dl_ptr);
}

static void virtualbox_destroy(void *dl) {
    if (dl) {
#if 0 /* VBoxRT.so doesn't like being reloaded. See @bugref{3725}. */
        dlclose(dl);
#endif
    }	
}


/*======================================================================
 * Load virtualbox library and ruby classes according to detected version
 * Create necessary hooks
 *======================================================================*/

/* export symbol for implementing classes */
VBOX_XPCOMC virtualbox_com_xpcom = NULL;

/* import symbol for class creation */
extern VALUE virtualbox_com_virtualbox(void *ptr);
extern VALUE virtualbox_com_session(void *ptr);


/* ruby calls this to load the extension */
void Init_vbox_loader(void) {
    void *      vlib  = NULL;
    VBOX_XPCOMC xpcom = NULL;
    char *      api   = NULL;
    void *vbox, *session, *queue;

    /* Virtualbox */
    xpcom = virtualbox_com_xpcom = virtualbox_init(&vlib);

    /* 4.1 */
    api = "virtualbox/com/xpcomc-native/4.1/vbox";
    xpcom->initialize("c28be65f-1a8f-43b4-81f1-eb60cb516e66", &vbox,
		      "12f4dcdb-12b2-4ec1-b7cd-ddd9f6c5bf4d", &session);
    if (vbox && session) goto found;

    /* 4.2 */
    api = "virtualbox/com/xpcomc-native/4.2/vbox";
    xpcom->initialize("3b2f08eb-b810-4715-bee0-bb06b9880ad2", &vbox,
		      "12f4dcdb-12b2-4ec1-b7cd-ddd9f6c5bf4d", &session);
    if (vbox && session) goto found;

    /* Not supported (exception is raised) */
    rb_loaderror("Virtualbox version not supported");
    /* NOT REACHED */

 found:
    rb_require(api);

    VALUE mVirtualBox        = rb_define_module("VirtualBox");
    VALUE mCOM               = rb_define_module_under(mVirtualBox, "COM");
    VALUE mModel             = rb_define_module_under(mCOM, "Model");

    /* Instantiate VirtualBox and Session class */
    rb_const_set(mCOM, rb_intern("VIRTUALBOX"), 
		 virtualbox_com_virtualbox(vbox));
    rb_const_set(mCOM, rb_intern("SESSION"), 
		 virtualbox_com_session(vbox));

#if 0
    /* Instantiate event queue */
    xpcom->get_event_queue(&queue);
    printf("Got the event queue: %p\n", (void *)queue);
#endif

}
