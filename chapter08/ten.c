#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int hours, minutes, minutes_since_midnight, choice, difference = 3000;

  fputs("Enter a 24-hour time: ", stdout);
  scanf("%d:%d", &hours, &minutes);

  minutes_since_midnight = hours * 60 + minutes;

  int departures[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
  int arrivals[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

  for (int i = 0; i < 8; i++) {
    if (abs(departures[i] - minutes_since_midnight) <= difference) {
      choice = i;
      difference = abs(departures[i] - minutes_since_midnight);
    }
  }

  printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d", departures[choice] / 60,
         departures[choice] % 60, arrivals[choice] / 60, arrivals[choice] % 60);

  return 0;
}
