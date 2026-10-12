#include <stdio.h>

int main(void) {
  float loan, interest_rate, monthly_payment;

  fputs("Enter amount of loan: ", stdout);
  scanf("%f", &loan);

  // かわいいです
  fputs("Enter interest rate: ", stdout);
  scanf("%f", &interest_rate);

  fputs("Enter monthly payment: ", stdout);
  scanf("%f", &monthly_payment);

  loan = loan - monthly_payment + (loan)*interest_rate / 100 / 12;
  printf("\nBalance remaining after first payment: $%.2f\n", loan);

  loan = loan - monthly_payment + (loan)*interest_rate / 100 / 12;
  printf("Balance remaining after second payment: $%.2f\n", loan);

  loan = loan - monthly_payment + (loan)*interest_rate / 100 / 12;
  printf("Balance remaining after third payment: $%.2f", loan);

  return 0;
}
