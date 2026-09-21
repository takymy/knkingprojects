#include <stdio.h>

int gcd(int m, int n) {
  int r;

  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  return m;
}

int main(void) {
  int m, n;
  fputs("Enter a two integers: ", stdout);
  scanf("%d %d", &m, &n);

  printf("Greates common divisor: %d", gcd(m, n));

  return 0;
}
