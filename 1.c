#include <stdio.h>

int main(void) {

  int x,y,z;
  int max;
  int min;

  printf("정수 3개:");
  scanf("%d %d %d", &x, &y, &z);

  max=(x>y)? x:y;
  max=(max>z)? max:z;

  min=(x<y)? x:y;
  min=(min<z)? min:z;

  printf("max=%d\n", max);
  printf("min=%d\n", min);
  





  
  return 0;
}
