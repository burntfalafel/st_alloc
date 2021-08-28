#define BLOAT 0

#define st_vector(X) \
  struct { \
    size_t len; \
    X data[]; \
  }

#define st_init(X) (\
  (X).len = 0 \
  )

#define st_push(X,V) (\
    (X).data[(X).len] = V, \
    (X).len++ \
    )

#define st_pop(X) (\
    (X).data[(X).len-1] \
    )

