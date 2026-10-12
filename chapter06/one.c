#include <stdio.h>

int main(void) {
  float input_num, final_num = 0;

  for (;;) {
    fputs("Enter a number: ", stdout);
    scanf("%f", &input_num);
    if (input_num <= 0) {
      break;
    }
    if (input_num >= final_num) {
      final_num = input_num;
    }
  }

  printf("\nThe largest number entered was %.2f", final_num);

  return 0;
}
