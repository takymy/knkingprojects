#include <stdio.h>

int digit(int n, int k) {
  int d;

  for (; k > 0; k--) {
    if (n == 0) {
      return 0;
    }
    d = n % 10;
    n /= 10;
  }

  return d;
}

int main(void) {
  int n, k;

  fputs("Enter an integer number and k number, where k is kth digit (from the right) in n: ",
        stdout);
  scanf("%d %d", &n, &k);

  printf("The %d digit in %d is: %d", k, n, digit(n, k));

  return 0;
}
