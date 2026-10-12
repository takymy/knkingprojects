#include <stdio.h>

int main(void) {
  char first, last;

  fputs("Enter a first and last name: ", stdout);

  scanf(" %c", &first);

  while (getchar() != ' ')
    ;
  while ((last = getchar()) == ' ')
    ;

  printf("%c", last);

  while ((last = getchar()) != '\n' && last != ' ') {
    printf("%c", last);
  }

  printf(", %c.", first);

  return 0;
}
