#include <stdio.h>
#include <ctype.h>

int main(void) {
  char message[100] = {0};
  int ch;
  int counter = 0;

  fputs("Enter message: ", stdout);

  while ((ch = getchar()) != '\n') {
    switch (ch = toupper(ch)) {
    case 'A':
      message[counter++] = '4';
      break;
    case 'B':
      message[counter++] = '8';
      break;
    case 'E':
      message[counter++] = '3';
      break;
    case 'I':
      message[counter++] = '1';
      break;
    case 'O':
      message[counter++] = '0';
      break;
    case 'S':
      message[counter++] = '5';
      break;
    default:
      message[counter++] = ch;
    }
  }

  fputs("In B1FF-speak: ", stdout);

  for (int i = 0; i < counter + 10; i++) {
    if (i < counter) {
      putchar(message[i]);
    } else {
      putchar('!');
    }
  }

  return 0;
}
