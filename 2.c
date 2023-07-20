#include <stdio.h>

int main(void) {

  int x, even;

  printf("숫자를 입력하시오.:");
  scanf("%d", &x);

  even = (x % 2 == 0) ? 1 : 0;

  if (even) {
  printf("%d는 짝수입니다.\n", x);
  } 
  else 
  {
  printf("%d는 홀수입니다.\n", x);
  }

  return 0;
}
