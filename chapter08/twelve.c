#include <stdio.h>
#include <ctype.h>

int main(void) {
  int ch;
  int sum = 0;
  char scrabble_values[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                              1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  fputs("Enter a word: ", stdout);

  while ((ch = getchar()) != '\n' && isalpha(ch)) {
    sum += scrabble_values[toupper(ch) - 65];
  }
  printf("Scrabble value: %d", sum);

  return 0;
}
