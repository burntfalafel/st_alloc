
#define stack_sz(X) \
  struct { \
    size_t len; \
    X* data; \
  }

#define st_malloc(X,L) (\
  (X).len = (L), \
  (X).data = NULL \
  )

typdef struct st_malloc_struct {
  size_t len;
  unsigned char* data;
} st_malloc_struct;

void *st_malloc(size_t len)
{
  st_malloc_struct ptr;
  ptr.len = len;
  ptr.data[len] = NULL;
}
  

#define TYPE float
#define TYPED_NAME(X) int_##X
#undef TYPE
#undef TYPED_NAME

