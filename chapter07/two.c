/* Prints a table of square using a for statement */

#include <stdio.h>

int main(void) {
  long i, n;

  puts("This program prints a table of squares");
  fputs("Enter number of entries in table: ", stdout);

  scanf("%ld", &n);

  while (getchar() != '\n')
    ;

  for (i = 1; i <= n; i++) {
    printf("%10ld %10ld\n", i, i * i);

    if (i % 24 == 0) {
      fputs("Press Enter to continue or Tab to stop...", stdout);
      char ch = getchar();
      if (ch == '\n') {
        continue;
      } else if (ch == '\t') {
        return 0;
      }
    }
  }

  return 0;
}
