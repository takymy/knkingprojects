#include <stdio.h>

int main(void) {
  int hours, minutes, temp_hours;

  fputs("Enter a 24-hour time: ", stdout);
  scanf("%d:%d", &hours, &minutes);

  if (hours >= 24 || hours < 0) {
    printf("Wrong input");
    return 1;
  }

  if (hours > 12) {
    printf("Equivalent 12-hour time: %d:%.2d PM", hours - 12, minutes);
  } else if (hours == 12) {
    printf("Equivalent 12-hour time: %d:%.2d PM", hours, minutes);
  } else if (hours == 0) {
    printf("Equivalent 12-hour time: %d:%.2d AM", hours + 12, minutes);
  } else {
    printf("Equivalent 12-hour time: %d:%.2d AM", hours, minutes);
  }

  return 0;
}
