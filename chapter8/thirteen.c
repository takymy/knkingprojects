#include <stdio.h>

int main(void) {
  char first, last[20] = {0};
  int ch;

  fputs("Enter a first and last name: ", stdout);

  scanf(" %c", &first);

  while (getchar() != ' ')
    ;

  for (int i = 0; i < 20; i++) {
    if ((ch = getchar()) == '\n') {
      break;
    } else {
      last[i] = ch;
      putchar(last[i]);
    }
  }

  printf(", %c.", first);

  return 0;
}
