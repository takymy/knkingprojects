#include <stdio.h>

int calc_res(int x) {
  return (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
}

int main(void) {
  int x;

  fputs("Enter the value of x: ", stdout);
  scanf("%d", &x);

  printf("The result of the polynomial (3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6) where x is %d is: %d", x,
         calc_res(x));

  return 0;
}
