#include <stdio.h>

int main(void) {
  int temperature_readings[30][24] = {0};
  int avg = 0, daily_avg;

  for (int i = 0; i < 30; i++) {
    printf(
        "Enter readings for Day %d, for each hour of the day one by one starting from 1st hour to 24th: ",
        i);
    daily_avg = 0;
    for (int j = 0; j < 24; j++) {
      scanf("%d ", &temperature_readings[i][j]);
      daily_avg += temperature_readings[i][j];
    }

    avg += daily_avg / 24;
  }

  printf("Daily avg for the month is: %d", avg / 30);

  return 0;
}
