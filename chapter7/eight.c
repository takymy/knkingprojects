#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
  int hours, minutes, minutes_since_midnight;
  char indicator;

  fputs("Enter a 12-hour format time: ", stdout);
  scanf("%d:%d %c", &hours, &minutes, &indicator);

  if (toupper(indicator) == 'P' && hours <= 11) {
    minutes_since_midnight = (hours + 12) * 60 + minutes;
  } else if (toupper(indicator) == 'A' && hours == 12) {
    minutes_since_midnight = minutes;
  } else {
    minutes_since_midnight = hours * 60 + minutes;
  }

  if (abs(8 * 60 - minutes_since_midnight) <= abs(9 * 60 + 43 - minutes_since_midnight)) {
    puts("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
  } else if (abs(9 * 60 + 43 - minutes_since_midnight) <=
             abs(11 * 60 + 19 - minutes_since_midnight)) {
    puts("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
  } else if (abs(11 * 60 + 19 - minutes_since_midnight) <=
             abs(12 * 60 + 47 - minutes_since_midnight)) {
    puts("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
  } else if (abs(12 * 60 + 47 - minutes_since_midnight) <= abs(14 * 60 - minutes_since_midnight)) {
    puts("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
  } else if (abs(14 * 60 - minutes_since_midnight) <= abs(15 * 60 + 45 - minutes_since_midnight)) {
    puts("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
  } else if (abs(15 * 60 + 45 - minutes_since_midnight) <= abs(19 * 60 - minutes_since_midnight)) {
    puts("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
  } else if (abs(19 * 60 - minutes_since_midnight) <= abs(21 * 60 + 45 - minutes_since_midnight)) {
    puts("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
  } else {
    puts("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
  }

  return 0;
}
