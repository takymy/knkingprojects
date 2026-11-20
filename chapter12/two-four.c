#include <stdio.h>
#include <ctype.h>
#define N 50

int main(void) {
  char message[N];
  char messageReverse[N];
  char *p = message, *q = messageReverse;
  char ch;
  int counter = 0;

  fputs("Enter a message: ", stdout);

  while ((ch = getchar()) != '\n' && p != &message[N - 1]) {
    if (isalpha(ch)) {
      *p++ = tolower(ch);
      counter++;
    }
  }

  while (p > message) {
    *q++ = *--p;
    if (p == &message[0]) {
      break;
    }
  }

  q = &messageReverse[0];
  p = &message[0];

  for (int i = 0; i < counter; i++) {
    if (*p++ != *q++) {
      puts("Not a palindrome");
      return 0;
    }
  }

  puts("Palindarome");
  return 0;
}
