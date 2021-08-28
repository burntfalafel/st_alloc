#include <stdio.h>

#include "st_vector.h"

int main()
{
  st_vector(int) Z;
  st_init(Z);
  st_push(Z,123);
  st_push(Z,435);
  st_push(Z,567);
  printf("%zu\n", Z.len);
  int z = st_pop(Z);
  z = st_pop(Z);
  printf("%d\n", z);
  st_free(Z);

  return 0;
}
