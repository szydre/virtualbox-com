
#define SYM(str) ID2SYM(rb_intern(str))


#if   2 == SIZEOF_SHORT
#  define NUM2INT16(val)  NUM2SHORT(val)
#  define NUM2UINT16(val) NUM2USHORT(val)
#elif 2 == SIZEOF_INT
#  define NUM2INT16(val)  NUM2INT(val)
#  define NUM2UINT16(val) NUM2UINT(val)
#elif 2 == SIZEOF_LONG
#  define NUM2INT16(val)  NUM2LONG(val)
#  define NUM2UINT16(val) NUM2ULONG(val)
#elif 2 == SIZEOF_LONG_LONG
#  define NUM2INT16(val)  NUM2LL(val)
#  define NUM2UINT16(val) NUM2ULL(val)
#else
#  error "unknown conversion"
#endif

#if   4 == SIZEOF_SHORT
#  define NUM2INT32(val)  NUM2SHORT(val)
#  define NUM2UINT32(val) NUM2USHORT(val)
#elif 4 == SIZEOF_INT
#  define NUM2INT32(val)  NUM2INT(val)
#  define NUM2UINT32(val) NUM2UINT(val)
#elif 4 == SIZEOF_LONG
#  define NUM2INT32(val)  NUM2LONG(val)
#  define NUM2UINT32(val) NUM2ULONG(val)
#elif 4 == SIZEOF_LONG_LONG
#  define NUM2INT32(val)  NUM2LL(val)
#  define NUM2UINT32(val) NUM2ULL(val)
#else
#  error "unknown conversion"
#endif

#if   8 == SIZEOF_SHORT
#  define NUM2INT64(val)  NUM2SHORT(val)
#  define NUM2UINT64(val) NUM2USHORT(val)
#elif 8 == SIZEOF_INT
#  define NUM2INT64(val)  NUM2INT(val)
#  define NUM2UINT64(val) NUM2UINT(val)
#elif 8 == SIZEOF_LONG
#  define NUM2INT64(val)  NUM2LONG(val)
#  define NUM2UINT64(val) NUM2ULONG(val)
#elif 8 == SIZEOF_LONG_LONG
#  define NUM2INT64(val)  NUM2LL(val)
#  define NUM2UINT64(val) NUM2ULL(val)
#else
#  error "unknown conversion"
#endif


#if SIZEOF_LONG == SIZEOF_VOIDP
#  define NUM2PTR(val) NUM2ULONG(val)
#  define PTR2NUM(ptr) ULONG2NUM(ptr)
#elif SIZEOF_LONG_LONG == SIZEOF_VOIDP
#  define NUM2PTR(val) NUM2ULL(val)
#  define PTR2NUM(ptr) ULL2NUM(ptr)
#else
#  error "unknown converion"
#endif
