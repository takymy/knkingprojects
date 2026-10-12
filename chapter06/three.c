#include <stdio.h>

int main(void) {
  int num_1, num_2, m, n, remainder;

  fputs("Enter a fraction: ", stdout);
  scanf("%d/%d", &num_1, &num_2);

  m = num_1;
  n = num_2;

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("In lowest terms: %d/%d", num_1 / m, num_2 / m);

  return 0;
}
