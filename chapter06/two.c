#include <stdio.h>

int main(void) {
  int m, n, remainder;
  fputs("Enter a two integers: ", stdout);
  scanf("%d %d", &m, &n);

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }
  printf("Greates common divisor: %d", m);

  return 0;
}
