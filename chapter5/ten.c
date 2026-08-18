#include <stdio.h>

int main(void) {
  int num;

  fputs("Enter numerical grade: ", stdout);
  scanf("%d", &num);

  if (num < 0 || num > 100) {
    fputs("Error: grade must be between 0 and 100", stdout);
    return 1;
  }

  printf("Letter grade: ");

  switch (num / 10) {
  case 10:
  case 9:
    puts("A");
    break;
  case 8:
    puts("B");
    break;
  case 7:
    puts("C");
    break;
  case 6:
    puts("D");
    break;
  default:
    puts("F");
    break;
  }

  return 0;
}
