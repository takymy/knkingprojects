#include <stdio.h>

int main(void) {
  int num1, num2, num3, num4, num5;

  fputs("Enter ISBN: ", stdout);
  scanf("%d-%d-%d-%d-%d", &num1, &num2, &num3, &num4, &num5);

  printf("GS1 prefix: %d\n", num1);
  printf("Group identifier: %d\n", num2);
  printf("Publisher code: %d\n", num3);
  printf("Item number: %d\n", num4);
  printf("Check digit: %d\n", num5);

  return 0;
}
