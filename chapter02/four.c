#include <stdio.h>

int main(void) {
  float amount;

  fputs("Enter an amount: ", stdout);
  scanf("%f", &amount);

  printf("With tax added: $%.2f", amount * 1.05);

  return 0;
}
