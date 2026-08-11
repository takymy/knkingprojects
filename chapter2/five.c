#include <stdio.h>

int main(void) {
  int x;

  fputs("Enter the value of x: ", stdout);

  scanf("%d", &x);

  printf("The value of the following polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x "
         "- 6 is: %d",
         3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x +
             7 * x - 6);

  return 0;
}
