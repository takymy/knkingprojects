#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) {
  int num_1, num_2, reduced_numerator, reduced_denominator;
  fputs("Enter a fraction: ", stdout);
  scanf("%d/%d", &num_1, &num_2);

  reduce(num_1, num_2, &reduced_numerator, &reduced_denominator);

  printf("In lowest terms: %d/%d", reduced_numerator, reduced_denominator);

  return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
  int m = numerator;
  int n = denominator;
  int remainder;

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  *reduced_numerator = numerator / m;
  *reduced_denominator = denominator / m;
}
