typedef int       bool_t;
typedef uint16_t *wstring_t;

typedef struct iid {
    uint32_t m0;
    uint16_t m1;
    uint16_t m2;
    uint8_t  m3[8];
} iid_t;

struct obj {
    void * vtbl;
};


typedef struct VBOX_XPCOMC {
    unsigned cb;
    unsigned uVersion;
    unsigned int (*get_version    )(void);    
    void         (*initialize     )(const char *virtualBoxIID,
				    void **virtualBox,
				    const char *sessionIID,
				    void **session);
    void         (*uninitialize   )(void);
    void         (*unalloc_mem    )(void *pv);
    void         (*utf16_free     )(wstring_t u16);
    void         (*utf8_free      )(char *u8);
    int          (*utf16_to_utf8  )(const wstring_t u16, char **u8);
    int          (*utf8_to_utf16  )(const char *u8, wstring_t *u16);
    void         (*get_event_queue)(void **eventQueue);
    unsigned uEndVersion;
} * VBOX_XPCOMC;
typedef VBOX_XPCOMC (*VBOX_GET_XPCOMC_FUNCTIONS)(unsigned uVersion);

