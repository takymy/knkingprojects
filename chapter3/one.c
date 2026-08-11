#include <stdio.h>

int main(void) {
  int month, day, year;

  fputs("Enter a date (mm/dd/yyyy): ", stdout);
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date: %d%.2d%.2d", year, month, day);

  return 0;
}
