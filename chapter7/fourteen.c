#include <stdio.h>
#include <math.h>

int main(void) {
  double x, y, new_y = 1.0, xy;

  fputs("Enter a positive number: ", stdout);
  scanf("%lf", &x);

  do {
    y = new_y;
    xy = x / y;
    new_y = (y + xy) / 2;
  } while (fabs(new_y - y) > 0.00001 * y);

  printf("Square root: %.5lf", new_y);

  return 0;
}
