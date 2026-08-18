#include <stdio.h>

int main(void) {
  int number, digits;

  fputs("Enter a number: ", stdout);
  scanf("%d", &number);

  if (number < -32768 || number > 32767) {
    printf("This number cannot be accepted\n");
    return 0;
  }

  int temp = number > 0 ? -number : number;

  if (temp > -10) {
    digits = 1;
  } else if (temp > -100) {
    digits = 2;
  } else if (temp > -1000) {
    digits = 3;
  } else if (temp > -10000) {
    digits = 4;
  } else {
    digits = 5;
  }

  printf("The number %d has %d digits\n", number, digits);

  return 0;
}
