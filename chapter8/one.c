/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  bool digit_seen[10] = {false};
  int digits[10] = {0};
  int digit;
  long n;
  int i = 0;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) {
      digits[i] = digit;
      i++;
    }
    digit_seen[digit] = true;
    n /= 10;
  }

  if (i != 0) {
    fputs("Repeated digit(s): ", stdout);
  } else {
    puts("No repeated digit");
    return 0;
  }

  while (i > 0) {
    printf("%d ", digits[--i]);
  }

  return 0;
}
