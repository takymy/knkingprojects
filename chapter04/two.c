#include <stdio.h>

int main(void) {
  int num;

  fputs("Enter a three-digit number: ", stdout);
  scanf("%d", &num);

  printf("The reversal is: %d%d%d", num % 10, num % 100 / 10, num / 100);

  return 0;
}
