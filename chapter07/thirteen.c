#include <stdio.h>

int main(void) {
  float blank_counter = 1, counter = 0;
  char ch;

  fputs("Enter a sentence: ", stdout);

  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      blank_counter += 1.0;
      continue;
    }
    counter += 1.0;
  }
  printf("Average word length: %.1f", counter / blank_counter);

  return 0;
}
