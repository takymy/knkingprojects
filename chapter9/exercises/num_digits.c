#include <stdio.h>

int num_digits(int n) {
  int counter = 0;

  do {
    n /= 10;
    counter++;
  } while (n != 0);

  return counter;
}

int main(void) {
  int n;

  fputs("Enter an integer: ", stdout);
  scanf("%d", &n);

  printf("The number of digits in number %d is: %d", n, num_digits(n));

  return 0;
}
