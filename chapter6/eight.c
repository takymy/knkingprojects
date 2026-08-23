#include <stdio.h>

int main(void) {
  int days, starting_day;

  fputs("Enter number of days in month: ", stdout);
  scanf("%d", &days);

  fputs("Enter starting day of the week (1=Sun, 7=Sat): ", stdout);
  scanf("%d", &starting_day);
  puts("");

  switch (starting_day) {
  case 7:
    printf("\t\t\t\t\t\t");
    break;
  case 6:
    printf("\t\t\t\t\t");
    break;
  case 5:
    printf("\t\t\t\t");
    break;
  case 4:
    printf("\t\t\t");
    break;
  case 3:
    printf("\t\t");
    break;
  case 2:
    printf("\t");
    break;
  default:
    break;
  }

  for (int i = 1; i <= days; i++) {
    if (starting_day == 7) {
      printf("%d\t\n", i);
      starting_day = 1;
    } else {
      printf("%d\t", i);
      starting_day++;
    }
  }

  return 0;
}
