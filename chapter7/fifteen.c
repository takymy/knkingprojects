#include <stdio.h>

int main(void) {
  long double num, result = 1;

  fputs("Enter a positive integer: ", stdout);
  scanf(" %Lf", &num);

  for (int i = num; i > 0; i--) {
    result = result * i;
  }

  printf("Factorial of %.0Lf: %.0Lf", num, result);

  return 0;
}

/*
 * Answers:
 *
 * (a) 7
 * (b) 12
 * (c) 20 depends tho
 * (d) 20
 * (e) 34
 * (f) 170
 * (g) 1754 depends tho
 *
 * */
