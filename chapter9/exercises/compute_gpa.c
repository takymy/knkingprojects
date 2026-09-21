#include <stdio.h>
#include <ctype.h>

float compute_gpa(int n, char grades[n]) {
  double sum = 0.0;

  for (int i = 0; i < n; i++) {
    switch (toupper(grades[i])) {
    case 'A':
      sum += 4.0;
      break;
    case 'B':
      sum += 3.0;
      break;
    case 'C':
      sum += 2.0;
      break;
    case 'D':
      sum += 1.0;
      break;
    case 'F':
      sum += 0.0;
      break;
    default:
      break;
    }
  }

  return sum / (float)n;
}

int main(void) {
  int n, ch, counter = 0;

  fputs("How many grades have you received: ", stdout);
  scanf("%d", &n);

  char grades[n];

  while (getchar() != '\n')
    ;

  fputs("Input your grades one by one separated by space: ", stdout);
  while ((ch = getchar()) != '\n' && counter != n) {
    grades[counter] = (char)ch;
    counter++;
  }

  printf("Your grade average is: %f", compute_gpa(n, grades));

  return 0;
}
