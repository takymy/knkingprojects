#include <stdio.h>

int main(void) {
  int amount, amount20, amount10, amount5, amount1;

  fputs("Enter a dollar amount: ", stdout);
  scanf("%d", &amount);

  amount20 = amount / 20;
  amount10 = (amount - 20 * amount20) / 10;
  amount5 = (amount - 20 * amount20 - 10 * amount10) / 5;
  amount1 = (amount - 20 * amount20 - 10 * amount10 - 5 * amount5);

  printf("\n$20 bills: %d\n", amount20);

  printf("$10 bills: %d\n", amount10);

  printf(" $5 bills: %d\n", amount5);

  printf(" $1 bills: %d\n", amount1);
}
