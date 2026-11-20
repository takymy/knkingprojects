#include <stdio.h>
#define N 50

int main(void) {
  char message[N];
  char *p = message;
  char ch;

  fputs("Enter a message: ", stdout);

  while ((ch = getchar()) != '\n' && p != &message[N]) {
    *p++ = ch;
  }

  fputs("Reversal is: ", stdout);

  p--;

  for (; p >= &message[0]; p--) {
    printf("%c", *p);
    if (p == &message[0]) {
      break;
    }
  }

  return 0;
}
