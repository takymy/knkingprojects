#include <stdio.h>

int main(void) {
  float left, right;
  char operator;

  fputs("Enter an expression: ", stdout);
  scanf("%f", &left);

  while ((operator = getchar()) != '\n') {
    scanf("%f", &right);
    switch (operator) {
    case '+':
      left = left + right;
      break;
    case '-':
      left = left - right;
      break;
    case '*':
      left = left * right;
      break;
    case '/':
      left = left / right;
      break;
    default:
      break;
    }
  }

  printf("Value of expression: %.1f", left);

  return 0;
}
