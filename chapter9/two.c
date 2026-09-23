#include <stdio.h>

float calc_tax(float income) {

  if (income < 750.0f) {
    return income * 0.01f;
  } else if (income < 2250.0f) {
    return 7.50f + (income - 750.0f) * 0.02f;
  } else if (income < 3750.0f) {
    return 37.50f + (income - 2250.0f) * 0.03f;
  } else if (income < 5250.0f) {
    return 82.50f + (income - 3750.0f) * 0.04f;
  } else if (income < 7000.0f) {
    return 142.50f + (income - 5250.0f) * 0.05f;
  } else {
    return 230.00f + (income - 7000.0f) * 0.06f;
  }
}

int main(void) {
  float income, tax;

  fputs("Enter the amount of taxable income: ", stdout);
  scanf("%f", &income);

  if (income <= 0) {
    printf("Invalid input");
    return 1;
  }

  printf("Amount of tax: %.2f", calc_tax(income));

  return 0;
}
