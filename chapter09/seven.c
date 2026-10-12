#include <stdio.h>

int power(int x, int n) {
  if (n == 0) {
    return 1;
  }

  if (n % 2 == 0) {
    int half = power(x, n / 2);
    return half * half;
  } else {
    return x * power(x, n - 1);
  }
}

int main(void) {
  int n, x;

  fputs("Enter the value of n: ", stdout);
  scanf("%d", &n);

  fputs("Enter the value of x: ", stdout);
  scanf("%d", &x);

  printf("%d to the power of %d is: %d", x, n, power(x, n));

  return 0;
}
