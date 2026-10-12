#include <stdio.h>

int main(void) {
  float income, tax;

  fputs("Enter the amount of taxable income: ", stdout);
  scanf("%f", &income);

  if (income <= 0) {
    printf("Invalid input");
    return 1;
  }

  if (income < 750.0f) {
    tax = income * 0.01f;
  } else if (income < 2250.0f) {
    tax = 7.50f + (income - 750.0f) * 0.02f;
  } else if (income < 3750.0f) {
    tax = 37.50f + (income - 2250.0f) * 0.03f;
  } else if (income < 5250.0f) {
    tax = 82.50f + (income - 3750.0f) * 0.04f;
  } else if (income < 7000.0f) {
    tax = 142.50f + (income - 5250.0f) * 0.05f;
  } else {
    tax = 230.00f + (income - 7000.0f) * 0.06f;
  }

  printf("Amount of tax: %.2f", tax);

  return 0;
}
