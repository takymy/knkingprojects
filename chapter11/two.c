#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void) {
  int hours, minutes;
  int departure, arrival;

  fputs("Enter a 24-hour time: ", stdout);
  scanf("%d:%d", &hours, &minutes);

  find_closest_flight(hours * 60 + minutes, &departure, &arrival);

  printf("Closest departure time is %02d:%02d, arriving at %02d:%02d.\n", departure / 60,
         departure % 60, arrival / 60, arrival % 60);

  return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {

  if (abs(480 - desired_time) <= abs(583 - desired_time)) {
    *departure_time = 480;
    *arrival_time = 616;
  } else if (abs(583 - desired_time) <= abs(679 - desired_time)) {
    *departure_time = 583;
    *arrival_time = 712;
  } else if (abs(679 - desired_time) <= abs(767 - desired_time)) {
    *departure_time = 679;
    *arrival_time = 811;
  } else if (abs(767 - desired_time) <= abs(840 - desired_time)) {
    *departure_time = 767;
    *arrival_time = 900;
  } else if (abs(840 - desired_time) <= abs(945 - desired_time)) {
    *departure_time = 840;
    *arrival_time = 968;
  } else if (abs(945 - desired_time) <= abs(1140 - desired_time)) {
    *departure_time = 945;
    *arrival_time = 1075;
  } else if (abs(1140 - desired_time) <= abs(1305 - desired_time)) {
    *departure_time = 1140;
    *arrival_time = 1280;
  } else {
    *departure_time = 1305;
    *arrival_time = 1438;
  }
}
