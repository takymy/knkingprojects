#include <stdio.h>

int main(void) {
  int num, div_num;

  fputs("Enter a number: ", stdout);
  scanf("%d", &num);

  do {
    div_num = num % 10;
    num /= 10;
    printf("%d", div_num);
  } while (num != 0);

  return 0;
}
