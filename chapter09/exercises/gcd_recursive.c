#include <stdio.h>

int gcd(int m, int n) {
  int r;

  if (n == 0) {
    return m;
  }
  r = m % n;
  m = n;
  n = r;

  return gcd(m, n);
}

int main(void) {
  int m, n;
  fputs("Enter a two integers: ", stdout);
  scanf("%d %d", &m, &n);

  printf("Greates common divisor: %d", gcd(m, n));

  return 0;
}
