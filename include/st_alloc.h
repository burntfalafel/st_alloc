#include<string.h>

#define BLOAT 0

typedef struct st_malloc_struct {
  union {
    float* float_d;
    unsigned char* uchar_d;
  };
} st_malloc_struct;

void st_init(st_malloc_struct *ptr)
{
  ptr = 0;
}

void st_malloc(st_malloc_struct *ptr)
{
  *ptr = (st_malloc_struct*){.float_d[len] = {0}, .uchar_d[len] = {0}};
  //if(BLOAT) memset(ptr.data,0,len);
}
  

