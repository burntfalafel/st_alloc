#include <stdlib.h>

#define BLOAT 0

#define st_vector(X) \
  struct { \
    size_t len; \
    size_t mem ; \
    X blank; \
    X *data; \
  }

#define st_init(X) (\
  (X).len = 0, \
  (X).data = NULL, \
  (X).mem = sizeof((X).blank) \
  )

#define st_push(X,V) (\
    (X).len++, \
    (X).data = realloc(X.data,((X).mem*(X).len)), \
    (X).data[(X).len - 1] = V \
    )

#define st_pop(X) (\
    (X).len--, \
    (X).data = realloc(X.data,((X).mem*(X).len)), \
    (X).data[(X).len] \
    )

#define st_free(X) (\
    free(X.data), \
    X.data = NULL, \
    X.len =0 \
    )
