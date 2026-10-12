#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]) {
  int ch;

  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      counts[toupper(ch) - 65]++;
    }
  }
}

bool equal_array(int counts1[26], int counts2[26]) {
  for (int i = 0; i < 26; i++) {
    if (counts1[i] - counts2[i] != 0) {
      return false;
    }
  }

  return true;
}

int main(void) {
  int counts1[26] = {0};
  int counts2[26] = {0};

  fputs("Enter first word: ", stdout);
  read_word(counts1);

  fputs("Enter second word: ", stdout);
  read_word(counts2);

  if (equal_array(counts1, counts2)) {
    fputs("The words are anagrams.", stdout);
  } else {
    fputs("The words are not anagrams.", stdout);
  }

  return 0;
}
