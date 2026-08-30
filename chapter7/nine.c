#include <stdio.h>
#include <ctype.h>

int main(void) {
  int hours, minutes;
  char indicator1, indicator2;

  fputs("Enter a 12-hour format time: ", stdout);
  scanf("%d:%d %c%c", &hours, &minutes, &indicator1, &indicator2);

  if (toupper(indicator1) == 'P' && hours <= 11) {
    hours = hours + 12;
  } else if (toupper(indicator1) == 'A' && hours == 12) {
    hours = 0;
  }

  printf("Equivalent 24-hour time: %.2d:%.2d", hours, minutes);

  return 0;
}
