/* Prints a table of square using a for statement */

#include <stdio.h>

int main(void) {
  long i, n;

  puts("This program prints a table of squares");
  fputs("Enter number of entries in table: ", stdout);

  scanf("%ld", &n);

  for (i = 1; i <= n; i++) {
    printf("%10ld%10ld\n", i, i * i);
  }

  return 0;
}
