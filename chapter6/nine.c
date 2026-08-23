#include <stdio.h>

int main(void) {
  float loan, interest_rate, monthly_payment;
  int number_payments;

  fputs("Enter amount of loan: ", stdout);
  scanf("%f", &loan);

  fputs("Enter interest rate: ", stdout);
  scanf("%f", &interest_rate);

  fputs("Enter monthly payment: ", stdout);
  scanf("%f", &monthly_payment);

  fputs("Enter number of payments: ", stdout);
  scanf("%d", &number_payments);

  for (int i = 1; i <= number_payments; i++) {
    loan = loan - monthly_payment + (loan)*interest_rate / 100 / 12;
    printf("\nBalance remaining after %d payment: $%.2f\n", i, loan);
  }

  return 0;
}
