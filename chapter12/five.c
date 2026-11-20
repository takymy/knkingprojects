#include <stdio.h>

int main(void) {
  char words[100] = {0};
  int counter = 0, j = 0, ch;
  char *p = words;
  char *q = words;
  char *d = words;

  fputs("Enter a sentence: ", stdout);

  // ch variable stores terminating character after the loop finishes it's execution.
  while ((ch = getchar()) != '.' && ch != '!' && ch != '?' && ch != '\n') {
    *p++ = ch;
    d++;
  }

  fputs("Reversal of sentence: ", stdout);

  for ((d--, p = p - 1); p >= words; p--) {
    if (p == words || *p != ' ' && *(p - 1) == ' ') {
      q = p;
      while (q <= d && *q != ' ') {
        putchar(*q++);
      }
      if (p != words) {

        putchar(' ');
      } else {
        if (ch != '\n') {
          putchar(ch);
        }
      }
    }
    if (p == words) {
      break;
    }
  }

  return 0;
}
