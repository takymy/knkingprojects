#include <stdio.h>
#define PI 3.12f

int main(void) {
  float volume, radius = 10;

  volume = 4.0f / 3.0f * PI * (radius * radius * radius);

  printf("The volume of the sphere of radius 10m is: %f", volume);

  return 0;
}
