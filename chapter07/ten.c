#include <stdio.h>
#include <ctype.h>

int main(void) {
  char ch;
  int counter = 0;

  fputs("Enter a sentence: ", stdout);

  while ((ch = getchar()) != '\n') {
    switch (tolower(ch)) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      counter += 1;
      break;
    default:
      break;
    }
  }

  printf("Your sentence contains %d vowels.\n", counter);

  return 0;
}
