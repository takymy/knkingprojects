#include <stdio.h>

int main(void) {
  int fib_numbers[40] = {0, 1};

  printf("1: %d\n2: %d\n", fib_numbers[0], fib_numbers[1]);

  for (int i = 2; i < 40; i++) {
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    printf("%d: %d\n", i + 1, fib_numbers[i]);
  }

  return 0;
}
