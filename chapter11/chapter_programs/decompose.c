#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int main(void) {
  long i = 2;
  double d = 3.0;

  decompose(3.14159, &i, &d);

  return 0;
}

void decompose(double x, long *int_part, double *frac_part) {
  *int_part = (long)x;
  *frac_part = x - *int_part;
}
