#include <stdio.h>

int main(void) {
  int num1, num2, num3;

  fputs("Enter a phone number [(xxx) xxx-xxxx]: ", stdout);
  scanf("(%d) %d-%d", &num1, &num2, &num3);

  printf("You entered %.3d.%.3d.%.4d", num1, num2, num3);

  return 0;
}
