#include <stdio.h>

int main(void) {
  int n, d;

  fputs("Enter a number that you would wish to know is prime or not prime: ", stdout);
  scanf("%d", &n);

  for (d = 2; d < n; d++) {
    if (n % d == 0) {
      break;
    }
  }
  if (d < n) {
    printf("%d is divisible by %d, hence it's not prime\n", n, d);
  } else {
    printf("%d is prime\n", n);
  }

  return 0;
}
