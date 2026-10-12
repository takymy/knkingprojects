#include <stdio.h>

int day_of_year(int month, int day, int year) {
  int day_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, num_day = 0;

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    day_in_month[1]++;
  }

  for (int i = 0; i < month - 1; i++) {
    num_day += day_in_month[i];
  }
  num_day += day;

  return num_day;
}

int main(void) {
  int month, day, year;

  fputs("Enter the date in the following format MM/DD/YYYY: ", stdout);

  scanf("%d/%d/%d", &month, &day, &year);

  printf("The day of the year is %d", day_of_year(month, day, year));

  return 0;
}
