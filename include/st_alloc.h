
#define stack_sz(X) \
  struct { \
    size_t len; \
    X* data; \
  }

#define st_malloc(X,L) (\
  (X).len = (L), \
  (X).data = NULL \
  )

