#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1},
};
char digits[4][MAX_DIGITS * 4];
int pos = 0;
int count = 0;

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
  int ch;

  clear_digits_array();

  fputs("Enter a number: ", stdout);
  while ((ch = getchar()) != '\n') {
    if (!isdigit(ch)) {
      continue;
    }
    if (count == MAX_DIGITS) {
      continue;
    }
    process_digit((ch - '0'), pos);
    count++;
  }
  print_digits_array();

  return 0;
}

void clear_digits_array(void) {
  for (int i = 0; i < 4 * MAX_DIGITS; i++) {
    for (int j = 0; j < 4; j++) {
      digits[j][i] = ' ';
    }
  }
}

void process_digit(int digit, int position) {
  for (int i = 0; i < 7; i++) {
    switch (segments[digit][i]) {
    case 1:
      switch (i) {
      case 0:
        digits[0][position + 1] = '_';
        break;
      case 1:
        digits[1][position + 2] = '|';
        break;
      case 2:
        digits[2][position + 2] = '|';
        break;
      case 3:
        digits[2][position + 1] = '_';
        break;
      case 4:
        digits[2][position] = '|';
        break;
      case 5:
        digits[1][position] = '|';
        break;
      case 6:
        digits[1][position + 1] = '_';
        break;
      }
      break;
    default:
      break;
    }
  }

  pos += 4;
}

void print_digits_array(void) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4 * MAX_DIGITS; j++) {
      printf("%c", digits[i][j]);
    }
    puts("");
  }
}
