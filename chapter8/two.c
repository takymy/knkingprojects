/* Checks numbers for repeated digits */

#include <stdio.h>

int main(void) {
  int occurences[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    occurences[digit]++;
    n /= 10;
  }

  fputs("Digit:      ", stdout);
  for (int i = 0; i < 10; i++) {
    printf("%d ", i);
  };
  puts("");

  fputs("Occurences: ", stdout);
  for (int i = 0; i < 10; i++) {
    printf("%d ", occurences[i]);
  };
  puts("\n");

  return 0;
}
