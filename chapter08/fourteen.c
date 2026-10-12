#include <stdio.h>

int main(void) {
  char words[100] = {0};
  int counter = 0, j = 0, ch;

  fputs("Enter a sentence: ", stdout);

  // ch variable stores terminating character after the loop finishes it's execution.
  while ((ch = getchar()) != '.' && ch != '!' && ch != '?') {
    words[counter++] = ch;
  }

  fputs("Reversal of sentence: ", stdout);

  for (int i = counter - 1; i >= 0; i--) {
    if (i == 0 || words[i] != ' ' && words[i - 1] == ' ') {
      j = i;
      while (j < counter && words[j] != ' ') {
        putchar(words[j++]);
      }
      if (i != 0) {

        putchar(' ');
      } else {
        putchar(ch);
      }
    }
  }

  return 0;
}
