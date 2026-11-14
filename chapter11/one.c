#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
  int amount, amount20, amount10, amount5, amount1;

  fputs("Enter a dollar amount: ", stdout);
  scanf("%d", &amount);

  pay_amount(amount, &amount20, &amount10, &amount5, &amount1);

  printf("\n$20 bills: %d\n", amount20);

  printf("$10 bills: %d\n", amount10);

  printf(" $5 bills: %d\n", amount5);

  printf(" $1 bills: %d\n", amount1);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  *twenties = dollars / 20;
  *tens = (dollars - 20 * *twenties) / 10;
  *fives = (dollars - 20 * *twenties - 10 * *tens) / 5;
  *ones = (dollars - 20 * *twenties - 10 * *tens - 5 * *fives);
}
