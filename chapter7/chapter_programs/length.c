#include <stdio.h>

int main(void) {
  int counter;

  fputs("Enter a message: ", stdout);

  while (getchar() != '\n') {
    counter++;
  }

  printf("Your message was %d character(s) long.\n", counter);

  return 0;
}
