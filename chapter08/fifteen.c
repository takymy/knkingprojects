#include <stdio.h>

int main(void) {
  char message[80] = {0};
  int ch;
  int shift_amount = 0, counter = 0;

  fputs("Enter message to be encrypted: ", stdout);
  while ((ch = getchar()) != '\n') {
    message[counter++] = ch;
  }

  fputs("Enter shift amount (1-25): ", stdout);
  scanf("%d", &shift_amount);

  fputs("Encrypted message: ", stdout);

  for (int i = 0; i < counter; i++) {
    if ((int)message[i] <= 90 && (int)message[i] >= 65) {
      putchar(((message[i] - 'A') + shift_amount) % 26 + 'A');
    } else if ((int)message[i] <= 122 && (int)message[i] >= 97) {
      putchar(((message[i] - 'a') + shift_amount) % 26 + 'a');
    } else {
      putchar(message[i]);
    }
  }

  return 0;
}
