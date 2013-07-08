#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <dlfcn.h>
#include <stdint.h>

#include <ruby.h>
#include <ruby/encoding.h>

#include "../types.h"
#include "../helpers.h"

#define NS_CHECK(x) ns_check(x)




/*======================================================================
 * Ruby shortcut 
 *  - handle conversion to fixed size type (int, pointer)
 *======================================================================*/


extern VBOX_XPCOMC virtualbox_com_xpcom;


static VBOX_XPCOMC xpcom        = NULL;

static VALUE mVirtualBox 	= Qundef;
static VALUE mCOM		= Qundef;
static VALUE mModel		= Qundef;

static VALUE cBlob		= Qundef;
static VALUE cWString		= Qundef;
static VALUE cCArray		= Qundef;
static VALUE cIID		= Qundef;
static VALUE cAbstractModel     = Qundef;
static VALUE cAbstractInterface = Qundef;
static VALUE cAbstractEnum      = Qundef;

static VALUE oZero   		= Qundef;
static VALUE oMax_u16		= Qundef;
static VALUE oMax_u32		= Qundef;
static VALUE oMax_u64		= Qundef;
static VALUE oMax_s16		= Qundef;
static VALUE oMax_s32		= Qundef;
static VALUE oMax_s64		= Qundef;
static VALUE oMin_s16		= Qundef;
static VALUE oMin_s32		= Qundef;
static VALUE oMin_s64		= Qundef;
static VALUE oExceptionMap      = Qundef;

static VALUE sYes		= Qundef;
static VALUE sNo		= Qundef;
static VALUE sTrue		= Qundef;
static VALUE sFalse		= Qundef;
static VALUE sOn		= Qundef;
static VALUE sOff		= Qundef;
static VALUE sEnabled		= Qundef;
static VALUE sDisabled		= Qundef;
static VALUE sIID               = Qundef;
static VALUE sCode 		= Qundef;
static VALUE sFunction		= Qundef;

static ID _IID;
static ID _map;
static ID _brackets;
static ID _bracketseq;
static ID _pow;
static ID _minus;
static ID _neg;
static ID _ge;
static ID _le;
static ID _is_a;
static ID _dup;
static ID _symbol;
static ID _value;
static ID _const_get;
static ID _new;

static rb_encoding * _UTF8;




static void no_instantiation(VALUE klass) {
    rb_undef_method(rb_singleton_class(klass), "new");
    rb_undef_alloc_func(klass);
}


static void ns_check(uint32_t rcode) {
    if (rcode & 0x80000000) {
	VALUE c = ULL2NUM(rcode);
	VALUE k = rb_funcall(oExceptionMap, _brackets, 1, c);
	VALUE h = rb_hash_new();
	rb_funcall(h, _bracketseq, 2, sCode, c);
	rb_exc_raise(rb_funcall(k, _new, 1, h));
    }
}

/* Forward definition */
static void nsISupports_free(struct obj *ptr);




/*======================================================================*
 * Internal classes
 *  They are an intermediate to
 *   - manage data conversion
 *   - perform garbage collection
 *======================================================================*/

/* Class: IID
 */
#define IID_STR_MAX 36  /* 8+1+4+1+4+1+4+1+12 */
static VALUE iid__new(iid_t *iid) {
    iid_t *a_iid = ALLOC(iid_t);
    *a_iid = *iid;
    return Data_Wrap_Struct(cIID, 0, free, a_iid);
}
static VALUE iid__to_s(VALUE self) {
    iid_t *iid = DATA_PTR(self);
    char str[IID_STR_MAX+1];
    snprintf(str, IID_STR_MAX+1, 
	     "%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
	     iid->m0, iid->m1, iid->m2,
	     iid->m3[0], iid->m3[1], iid->m3[2], iid->m3[3],
	     iid->m3[4], iid->m3[5], iid->m3[6], iid->m3[7]);
    return rb_str_new(str, IID_STR_MAX);
}
static void iid_init(VALUE under) {
    cIID = rb_define_class_under(under, "IID", rb_cObject);
    no_instantiation(cIID);
    rb_define_method(cIID, "to_s", iid__to_s, 0);
}


/* Class: Blob
 */
struct blob_info {
    uint32_t size;
    uint8_t *data;
};
static void blob_free(struct blob_info *bi) {
    xpcom->unalloc_mem(bi->data); 
    free(bi);
}
static VALUE blob_new(uint32_t size, uint8_t *data) {
    struct blob_info *bi = ALLOC(struct blob_info);
    bi->size = size;
    bi->data = data;
    return Data_Wrap_Struct(cBlob, 0, blob_free, bi);
}
static VALUE blob__new(VALUE self, VALUE data) {
    data = StringValue(data);
    return blob_new(RSTRING_LEN(data), (uint8_t*)RSTRING_PTR(data));
}

static VALUE blob__to_s(VALUE self) {
    struct blob_info * bi = ((struct blob_info *)DATA_PTR(self));
    return rb_str_new((char *)bi->data, bi->size);
}
static void blob_init(VALUE under) {
    cBlob = rb_define_class_under(under, "Blob", rb_cObject);
    no_instantiation(cBlob);
    rb_define_singleton_method(cBlob, "new", blob__new, 1);
    rb_define_method(cBlob, "to_s", blob__to_s, 0);
}


/* Class: WString
 */
static VALUE wstring_new(wstring_t wstr) {
    return Data_Wrap_Struct(cWString, 0, xpcom->utf16_free, wstr);
}
static VALUE wstring__new(VALUE self, VALUE str) {
    wstring_t  u16;
    char      *u8;
    str = StringValue(str);
    str = rb_str_export_to_enc(str, _UTF8);
    u8  = StringValueCStr(str);
    xpcom->utf8_to_utf16(u8, &u16);
    return wstring_new(u16);
}
static VALUE wstring__to_s(VALUE self) {
    wstring_t  u16 = DATA_PTR(self);
    char      *u8;
    VALUE      str;
    xpcom->utf16_to_utf8(u16, &u8);
    str = rb_str_new_cstr(u8);
    rb_enc_associate(str, _UTF8);
    xpcom->utf8_free(u8);
    return str;
}
static void wstring_init(VALUE under) {
    cWString = rb_define_class_under(under, "WString", rb_cObject);
    no_instantiation(cWString);
    rb_define_singleton_method(cWString, "new", wstring__new, 1);
    rb_define_method(cWString, "to_s", wstring__to_s, 0);
}


/* Class: CArray
 */
struct carray_info {
    uint32_t size;
    void    *data;
    VALUE    ary;
};
static void carray_free(struct carray_info *ci) {
    free(ci->data);
    free(ci);
}
static void carray_mark(struct carray_info *ci) {
    rb_gc_mark(ci->ary);
}
static VALUE carray_new(uint32_t size, void *data, VALUE ary) {
    struct carray_info *ci = ALLOC(struct carray_info);
    ci->size = size;
    ci->data = data;
    ci->ary  = ary;
    return Data_Wrap_Struct(cCArray, carray_mark, carray_free, ci);
}
static inline uint32_t carray_get_size(VALUE val) {
    return ((struct carray_info *)DATA_PTR(val))->size;
}
static inline void  *carray_get_data(VALUE val) {
    return ((struct carray_info *)DATA_PTR(val))->data;
}
static void carray_init(VALUE under) {
    cCArray = rb_define_class_under(under, "CArray", rb_cObject);
    no_instantiation(cCArray);
}




/*======================================================================*
 * Data preparation:
 *   Will check type and perform basic conversion.
 *   All exceptions should be raised here 
 *======================================================================*/

static VALUE prepare_int16(VALUE val) {
    if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
	rb_raise(rb_eArgError, "expecting Integer");
    if (rb_funcall(val, _ge, 1, oMin_s16) == Qfalse ||
	rb_funcall(val, _le, 1, oMax_s16) == Qfalse)
	rb_raise(rb_eArgError, "expecting array of Integer [-2^15..2^15-1]");
    return val;
}
static VALUE prepare_int32(VALUE val) {
    if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
	rb_raise(rb_eArgError, "expecting Integer");
    if (rb_funcall(val, _ge, 1, oMin_s32) == Qfalse ||
	rb_funcall(val, _le, 1, oMax_s32) == Qfalse)
	rb_raise(rb_eArgError, "expecting array of Integer [-2^32..2^31-1]");
    return val;
}
static VALUE prepare_int64(VALUE val) {
    if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
	rb_raise(rb_eArgError, "expecting Integer");
    if (rb_funcall(val, _ge, 1, oMin_s64) == Qfalse ||
	rb_funcall(val, _le, 1, oMax_s64) == Qfalse)
	rb_raise(rb_eArgError, "expecting array of Integer [-2^63..2^63-1]");
    return val;
}
static VALUE prepare_uint16(VALUE val) {
    if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
	rb_raise(rb_eArgError, "expecting Integer");
    if (rb_funcall(val, _ge, 1, oZero   ) == Qfalse ||
	rb_funcall(val, _le, 1, oMax_u16) == Qfalse)
	rb_raise(rb_eArgError, "expecting Integer [0..2^16-1]");
    return val;
}
static VALUE prepare_uint32(VALUE val) {
    if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
	rb_raise(rb_eArgError, "expecting Integer");
    if (rb_funcall(val, _ge, 1, oZero   ) == Qfalse ||
	rb_funcall(val, _le, 1, oMax_u32) == Qfalse)
	rb_raise(rb_eArgError, "expecting Integer [0..2^32-1]");
    return val;
}
static VALUE prepare_uint64(VALUE val) {
    if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
	rb_raise(rb_eArgError, "expecting Integer");
    if (rb_funcall(val, _ge, 1, oZero   ) == Qfalse ||
	rb_funcall(val, _le, 1, oMax_u64) == Qfalse)
	rb_raise(rb_eArgError, "expecting Integer [0..2^64-1]");
    return val;
}
 
static VALUE prepare_bool(VALUE val) {
    switch(rb_type(val)) {
    case T_TRUE :
	return Qtrue;

    case T_FALSE:  case T_NIL:
	return Qfalse;

    case T_BIGNUM: case T_FIXNUM: 
	return rb_equal(val, INT2FIX(0));

    case T_SYMBOL:
	if (val == sYes || val == sTrue  || val == sOn  || val == sEnabled )
	    return Qtrue;
	if (val == sNo  || val == sFalse || val == sOff || val == sDisabled)
	    return Qfalse;
	break;
    }
    rb_raise(rb_eArgError, "boolean-like value expected");
}

static VALUE prepare_ptr(VALUE val) {
    rb_raise(rb_eArgError, "passing pointer is not allowed");
}

static inline VALUE prepare_blob(VALUE val) {
    return blob__new(cBlob, val);
}

static inline VALUE prepare_wstring(VALUE val) {
    return wstring__new(cWString, val);
}

static VALUE prepare_enum(VALUE val, VALUE klass) {
    switch(rb_type(val)) {
    case T_FIXNUM:
    case T_BIGNUM: {
	if (NIL_P(rb_funcall(klass, _symbol, 1, val)))
	    goto arg_error;
	break;
    }
    case T_SYMBOL: {
	VALUE v = rb_funcall(klass, _value,  1, val);
	if (NIL_P(v)) goto arg_error;
	val = v;
	break;
    }
    default: arg_error:
	rb_raise(rb_eArgError, "can't interpret '%s' as part of %s",
		 StringValueCStr(val), rb_class2name(klass));
    }
    return val;
}

static VALUE prepare_interface(VALUE val, VALUE klass) {
    if (0 && rb_funcall(val, _is_a, 1, klass) == Qfalse) {
	rb_raise(rb_eArgError, "expecting %s", rb_class2name(klass));
    }
    return val;
}


static VALUE prepare_array_uint16(VALUE ary) {
    VALUE     res  = Qundef;
    uint16_t *data = NULL;
    long      len, i;

    ary  = rb_check_array_type(ary);
    len  = RARRAY_LEN(ary);
    data = ALLOC_N(uint16_t, len);
    res  = carray_new(len, data, Qnil);

    for (i = 0 ; i < len ; i++) {
	VALUE val   = rb_ary_entry(ary, i);
        if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
            rb_raise(rb_eArgError, "expecting array of Integer");
	if (rb_funcall(val, _ge, 1, oZero   ) == Qfalse ||
	    rb_funcall(val, _le, 1, oMax_u16) == Qfalse)
	    rb_raise(rb_eArgError, "expecting array of Integer [0..2^16-1]");
	data[i] = NUM2UINT16(val);
    }
    return res;
}

static VALUE prepare_array_int16(VALUE ary) {
    VALUE     res  = Qundef;
    int16_t * data = NULL;
    long      len, i;

    ary  = rb_check_array_type(ary);
    len  = RARRAY_LEN(ary);
    data = ALLOC_N(int16_t, len);
    res  = carray_new(len, data, Qnil);

    for (i = 0 ; i < len ; i++) {
	VALUE val   = rb_ary_entry(ary, i);
        if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
            rb_raise(rb_eArgError, "expecting array of Integer");
	if (rb_funcall(val, _ge, 1, oMin_s16) == Qfalse ||
	    rb_funcall(val, _le, 1, oMax_s16) == Qfalse)
	    rb_raise(rb_eArgError, "expecting array of Integer [-2^15..2^15-1]");
	data[i] = NUM2INT16(val);
    }
    return res;
}

static VALUE prepare_array_uint32(VALUE ary) {
    VALUE     res  = Qundef;
    uint32_t *data = NULL;
    long      len, i;

    ary  = rb_check_array_type(ary);
    len  = RARRAY_LEN(ary);
    data = ALLOC_N(uint32_t, len);
    res  = carray_new(len, data, Qnil);

    for (i = 0 ; i < len ; i++) {
	VALUE val   = rb_ary_entry(ary, i);
        if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
            rb_raise(rb_eArgError, "expecting array of Integer");
	if (rb_funcall(val, _ge, 1, oZero   ) == Qfalse ||
	    rb_funcall(val, _le, 1, oMax_u32) == Qfalse)
	    rb_raise(rb_eArgError, "expecting array of Integer [0..2^32-1]");
	data[i] = NUM2UINT32(val);
    }
    return res;
}

static VALUE prepare_array_int32(VALUE ary) {
    VALUE     res  = Qundef;
    int32_t * data = NULL;
    long      len, i;

    ary  = rb_check_array_type(ary);
    len  = RARRAY_LEN(ary);
    data = ALLOC_N(int32_t, len);
    res  = carray_new(len, data, Qnil);

    for (i = 0 ; i < len ; i++) {
	VALUE val   = rb_ary_entry(ary, i);
        if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
            rb_raise(rb_eArgError, "expecting array of Integer");
	if (rb_funcall(val, _ge, 1, oMin_s32) == Qfalse ||
	    rb_funcall(val, _le, 1, oMax_s32) == Qfalse)
	    rb_raise(rb_eArgError, "expecting array of Integer [-2^31..2^31-1]");
	data[i] = NUM2INT32(val);
    }
    return res;
}

static VALUE prepare_array_uint64(VALUE ary) {
    VALUE     res  = Qundef;
    uint64_t *data = NULL;
    long      len, i;

    ary  = rb_check_array_type(ary);
    len  = RARRAY_LEN(ary);
    data = ALLOC_N(uint64_t, len);
    res  = carray_new(len, data, Qnil);

    for (i = 0 ; i < len ; i++) {
	VALUE val   = rb_ary_entry(ary, i);
        if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
            rb_raise(rb_eArgError, "expecting array of Integer");
	if (rb_funcall(val, _ge, 1, oZero   ) == Qfalse ||
	    rb_funcall(val, _le, 1, oMax_u64) == Qfalse)
	    rb_raise(rb_eArgError, "expecting array of Integer [0..2^64-1]");
	data[i] = NUM2UINT64(val);
    }
    return res;
}

static VALUE prepare_array_int64(VALUE ary) {
    VALUE     res  = Qundef;
    int64_t * data = NULL;
    long      len, i;

    ary  = rb_check_array_type(ary);
    len  = RARRAY_LEN(ary);
    data = ALLOC_N(int64_t, len);
    res  = carray_new(len, data, Qnil);

    for (i = 0 ; i < len ; i++) {
	VALUE val   = rb_ary_entry(ary, i);
        if (rb_funcall(val, _is_a, 1, rb_cInteger) == Qfalse)
            rb_raise(rb_eArgError, "expecting array of Integer");
	if (rb_funcall(val, _ge, 1, oMin_s64) == Qfalse ||
	    rb_funcall(val, _le, 1, oMax_s64) == Qfalse)
	    rb_raise(rb_eArgError, "expecting array of Integer [-2^63..2^63-1]");
	data[i] = NUM2INT64(val);
    }
    return res;
}

static VALUE prepare_array_bool(VALUE ary) {
    VALUE   res  = Qundef;
    bool_t *data = NULL;
    long    len, i;

    ary  = rb_check_array_type(ary);
    len  = RARRAY_LEN(ary);
    data = ALLOC_N(bool_t, len);
    res  = carray_new(len, data, Qnil);

    for (i = 0 ; i < len ; i++) {
	VALUE val = prepare_bool(rb_ary_entry(ary, i));
	data[i] = val == Qtrue ? ~0 : 0;
    }
    return res;
}

static VALUE prepare_array_wstring(VALUE ary) {
    VALUE       res  = Qundef;
    wstring_t  *data = NULL;
    long        len, i;

    ary  = rb_ary_dup(rb_check_array_type(ary));
    len  = RARRAY_LEN(ary);
    data = ALLOC_N(wstring_t, len);
    res  = carray_new(len, data, ary);

    for (i = 0 ; i < len ; i++) {
	VALUE val = prepare_wstring(rb_ary_entry(ary, i));
	rb_ary_store(ary, i, val);
	data[i] = (wstring_t)DATA_PTR(val);
    }
    OBJ_FREEZE(ary);
    return res;
}

static VALUE prepare_array_enum(VALUE ary, VALUE klass) {
    VALUE       res  = Qundef;
    uint32_t   *data = NULL;
    long        len, i;

    ary  = rb_check_array_type(ary);
    len  = RARRAY_LEN(ary);
    data = ALLOC_N(uint32_t, len);
    res  = carray_new(len, data, Qnil);

    for (i = 0 ; i < len ; i++) {
	VALUE val = prepare_enum(rb_ary_entry(ary, i), klass);
	data[i] = NUM2UINT32(val);
    }
    return res;
}

static VALUE prepare_array_interface(VALUE ary, VALUE klass) {
    VALUE       res  = Qundef;
    void *     *data = NULL;
    long        len, i;

    ary  = rb_ary_dup(rb_check_array_type(ary));
    len  = RARRAY_LEN(ary);
    data = (void*)ALLOC_N(uint32_t, len);
    res  = carray_new(len, data, ary);

    for (i = 0 ; i < len ; i++) {
	VALUE val = rb_ary_entry(ary, i);
	if (rb_funcall(val, _is_a, 1, klass) == Qfalse)
	    rb_raise(rb_eArgError, "expecting array of %s",
		     rb_class2name(klass));
	data[i] = DATA_PTR(val);
    }
    OBJ_FREEZE(ary);
    return res;
}




/*======================================================================*
 * Extract C value from Ruby object (object has been previously prepared)
 *  - it's not necessary to perform checking
 *  - C value can be directly used
 *======================================================================*/

#define extract_int16(val, data)	     *(data) = NUM2INT16(val)
#define extract_int32(val, data)	     *(data) = NUM2INT32(val)
#define extract_int64(val, data)	     *(data) = NUM2INT64(val)
#define extract_uint16(val, data)	     *(data) = NUM2UINT16(val)
#define extract_uint32(val, data)	     *(data) = NUM2UINT32(val)
#define extract_uint64(val, data)	     *(data) = NUM2UINT64(val)
#define extract_bool(val, data) 	     *(data) = (val) == Qtrue ? ~0 : 0
#define extract_ptr(val, data) 	             *(data) = NUM2PTR(val)
#define extract_wstring(val, data) 	     *(data) = DATA_PTR(val)
#define extract_enum(val, data, klass)       *(data) = NUM2UINT32(val)
#define extract_interface(val, data, klass)  *(data) = DATA_PTR(val)

static inline void extract_blob(VALUE val, uint32_t *size, void **data) {
    struct blob_info   * bi = ((struct blob_info   *)DATA_PTR(val));
    *size = bi->size;
    *data = bi->data;
}

static inline void extract_carray(VALUE val, uint32_t *size, void **data) {
    struct carray_info * ci = ((struct carray_info *)DATA_PTR(val));
    *size = ci->size;
    *data = ci->data;
}




/*======================================================================*
 * Convert information from response
 *  - don't raise exception as this could lead to memory leak
 *
 *======================================================================*/

#define convert_int16(v)   LL2NUM(v)
#define convert_int32(v)   LL2NUM(v)
#define convert_int64(v)   LL2NUM(v)
#define convert_uint16(v)  ULL2NUM(v)
#define convert_uint32(v)  ULL2NUM(v)
#define convert_uint64(v)  ULL2NUM(v)
#define convert_ptr(v)     PTR2NUM(v)
#define convert_bool(v)    ((v) ? Qtrue : Qfalse)
#define convert_blob(s,d)  ((d) ? blob_new(s,d) : Qnil)
#define convert_wstring(v) ((v) ? wstring_new(v) : Qnil)

static inline VALUE convert_enum(uint32_t v, VALUE klass) {
    VALUE val = ULL2NUM(v);
    VALUE sym = rb_funcall(klass, _symbol, 1, val);
    if (NIL_P(sym)) {
	rb_warn("unable to convert value %d to enumeration symbol", v);
	return val;
    }
    return sym;
}

static inline VALUE convert_interface(void *iptr, VALUE klass) {
    return iptr ? Data_Wrap_Struct(klass, 0, nsISupports_free, iptr)
 	        : Qnil;
}


static inline VALUE convert_array_int32(uint32_t size, int32_t *array) {
    if (array) {
	VALUE  res = rb_ary_new();
	uint32_t i;
	for (i = 0 ; i < size ; i++)
	    rb_ary_store(res, i, convert_int32(array[i]));
	xpcom->unalloc_mem(array); 
	return res;
    } else {
	return Qnil;
    }
}
static inline VALUE convert_array_int64(uint32_t size, int64_t *array) {
    if (array) {
	VALUE res = rb_ary_new2(size);
	uint32_t i;
	for (i = 0 ; i < size ; i++)
	    rb_ary_store(res, i, convert_int64(array[i]));
	xpcom->unalloc_mem(array); 
	return res;
    } else {
	return Qnil;
    }
}
static inline VALUE convert_array_uint32(uint32_t size, uint32_t *array) {
    if (array) {
	VALUE res = rb_ary_new2(size);
	uint32_t i;
	for (i = 0 ; i < size ; i++)
	    rb_ary_store(res, i, convert_uint32(array[i]));
	xpcom->unalloc_mem(array); 
	return res;
    } else {
	return Qnil;
    }
}
static inline VALUE convert_array_enum(uint32_t size, uint32_t *array, VALUE klass) {
    if (array) {
	VALUE res = rb_ary_new2(size);
	uint32_t i;
	for (i = 0 ; i < size ; i++)
	    rb_ary_store(res, i, convert_enum(array[i], klass));
	xpcom->unalloc_mem(array); 
	return res;
    } else {
	return Qnil;
    }
}
static inline VALUE convert_array_interface(uint32_t size, void **array, VALUE klass) {
    if (array) {
	VALUE res = rb_ary_new2(size);
	uint32_t i;
	for (i = 0 ; i < size ; i++)
	    rb_ary_push(res, convert_interface(array[i], klass));
	xpcom->unalloc_mem(array); 
	return res;
    } else {
	return Qnil;
    }
}

static inline VALUE convert_array_wstring(uint32_t size, void **array) {
    if (array) {
	VALUE res = rb_ary_new2(size);
	uint32_t i;
	for (i = 0 ; i < size ; i++)
	    rb_ary_push(res, convert_wstring(array[i]));
	xpcom->unalloc_mem(array); 
	return res;
    } else {
	return Qnil;
    }
}



/*======================================================================*
 *
 *
 *
 *======================================================================*/

#include "generated.inc"


static void nsISupports_free(struct obj *ptr) {
    ((struct NSISupports *)ptr->vtbl)->Release(ptr);
}

static VALUE NSISupports__dup(VALUE self) {
    VALUE klass = rb_class_of(self);
    struct obj *obj = DATA_PTR(self);
    struct NSISupports *vtbl = obj->vtbl;
    vtbl->AddRef(obj);
    return Data_Wrap_Struct(klass, 0, nsISupports_free, obj);
}

static VALUE NSISupports__clone(VALUE self) {
    VALUE res = NSISupports__dup(self);    
    if (OBJ_TAINTED  (self)) OBJ_TAINT(res);
    if (OBJ_FROZEN   (self)) OBJ_FREEZE(res);
    if (OBJ_UNTRUSTED(self)) OBJ_UNTRUST(res);
    return res;
}

static VALUE NSISupports__cast(VALUE self, VALUE model_name) {
  VALUE  res      = Qundef;
  VALUE  model    = rb_funcall(mModel,_const_get, 2, model_name, Qfalse);
  VALUE  iid      = rb_funcall(model, _const_get, 2, sIID,       Qfalse);
  struct obj *obj = DATA_PTR(self);
  struct NSISupports *vtbl = obj->vtbl;
  void   *nobj    = NULL;

  if (rb_funcall(model, _le,   1, cAbstractInterface) == Qfalse ||
      rb_funcall(iid,   _is_a, 1, cIID              ) == Qfalse) {
      rb_raise(rb_eArgError, "provided object is not a COM Model");
  }

  NS_CHECK(vtbl->QueryInterface(obj, DATA_PTR(iid), &nobj));
  return convert_interface(nobj, model);
}





/*======================================================================*
 * Initialisation of ruby extension
 *======================================================================*/

#define RUBY_VBOX_INIT Init_vbox_ ## VBOX_API_VERSION
/* ruby calls this to load the extension */
void RUBY_VBOX_INIT(void) {
    VALUE oOne  = INT2FIX(1);
    VALUE oTwo  = INT2FIX(2);
    VALUE p15, p16, p31, p32, p63, p64;

    xpcom = virtualbox_com_xpcom;

    /* Basic ruby helper objects */
    _IID        = rb_intern("IID");
    _map        = rb_intern("map");
    _brackets   = rb_intern("[]");
    _bracketseq = rb_intern("[]=");
    _pow        = rb_intern("**");
    _minus      = rb_intern("-" );
    _neg        = rb_intern("-@");
    _ge         = rb_intern(">=");
    _le         = rb_intern("<=");
    _is_a       = rb_intern("is_a?");
    _dup        = rb_intern("dup");
    _symbol     = rb_intern("symbol");
    _value      = rb_intern("value");
    _const_get  = rb_intern("const_get");
    _new	= rb_intern("new");

    p15         = rb_funcall(oTwo, _pow,   1, INT2FIX(15));
    p16         = rb_funcall(oTwo, _pow,   1, INT2FIX(16));
    p31         = rb_funcall(oTwo, _pow,   1, INT2FIX(31));
    p32         = rb_funcall(oTwo, _pow,   1, INT2FIX(32));
    p63         = rb_funcall(oTwo, _pow,   1, INT2FIX(63));
    p64         = rb_funcall(oTwo, _pow,   1, INT2FIX(64));
    oZero       = INT2FIX(0);
    oMax_u16    = rb_funcall(p16,  _minus, 1, oOne);
    oMax_u32    = rb_funcall(p32,  _minus, 1, oOne);
    oMax_u64    = rb_funcall(p64,  _minus, 1, oOne);
    oMax_s16    = rb_funcall(p15,  _minus, 1, oOne);
    oMax_s32    = rb_funcall(p31,  _minus, 1, oOne);
    oMax_s64    = rb_funcall(p63,  _minus, 1, oOne);
    oMin_s16    = rb_funcall(p15,  _neg,   0);
    oMin_s32    = rb_funcall(p31,  _neg,   0);
    oMin_s64    = rb_funcall(p63,  _neg,   0);

    sYes	= SYM("yes"	);
    sNo		= SYM("no"	);
    sTrue       = SYM("true"    );
    sFalse      = SYM("false"   );
    sOn         = SYM("on"      );
    sOff        = SYM("off"     );
    sEnabled    = SYM("enabled" );
    sDisabled   = SYM("disabled");
    sIID        = SYM("IID"     );
    sCode       = SYM("code"    );
    sFunction   = SYM("function");

    _UTF8 	= rb_enc_find("UTF-8");
    if (_UTF8 == NULL)
	rb_fatal("can't find UTF-8 encoding");

    /* Define modules */
    mVirtualBox        = rb_define_module("VirtualBox");
    mCOM               = rb_define_module_under(mVirtualBox, "COM");
    mModel             = rb_define_module_under(mCOM, "Model");

    /* Define abstract enumerations / interfaces */
    cAbstractModel
	= rb_define_class_under(mCOM, "AbstractModel",     rb_cObject);
    cAbstractEnum 
	= rb_define_class_under(mCOM, "AbstractEnum",      cAbstractModel);
    cAbstractInterface 
	= rb_define_class_under(mCOM, "AbstractInterface", cAbstractModel);

    /* Retrieve exception map */
    oExceptionMap 
	= rb_funcall(mCOM, _const_get, 2, SYM("EXCEPTION_MAP"), Qfalse);

    /* Init internal classes */
        iid_init(mCOM);
       blob_init(mCOM);
    wstring_init(mCOM);
     carray_init(mCOM);
 
    /* Init of generated xpcom classes */
    comclass_init(mModel);
    
    rb_define_method(cNSISupports, "cast",  NSISupports__cast,  1);
    rb_define_method(cNSISupports, "dup",   NSISupports__dup,   0);
    rb_define_method(cNSISupports, "clone", NSISupports__clone, 0);
}

VALUE virtualbox_com_virtualbox(void *ptr) {
    return convert_interface(ptr, cVirtualBox);
}

VALUE virtualbox_com_session(void *ptr) {
    return convert_interface(ptr, cSession);
}
