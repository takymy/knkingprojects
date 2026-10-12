#include <stdio.h>
#include <ctype.h>

int main(void) {
  int seen[26] = {0};
  int ch;

  fputs("Enter first word: ", stdout);
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      seen[toupper(ch) - 65]++;
    }
  }

  fputs("Enter second word: ", stdout);
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      seen[toupper(ch) - 65]--;
    }
  }

  for (int i = 0; i < 26; i++) {
    if (seen[i] != 0) {
      fputs("The words are not anagrams.", stdout);
      return 0;
    }
  }

  fputs("The words are anagrams.", stdout);

  return 0;
}
