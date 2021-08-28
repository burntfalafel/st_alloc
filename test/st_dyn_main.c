#include <stdio.h>

#include "st_alloc.h"

int main()
{
  st_malloc_struct ptr;
  st_init(&ptr);
  st_malloc(&ptr, 10);
  ptr.float_d[0] = 2.123;
  return 0;
}
