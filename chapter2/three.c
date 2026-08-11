#include <stdio.h>
#define PI 3.12f

int main(void) {
  float volume, radius;

  puts("Welcome to volume computation program!");
  fputs(
      "What is the radius of the sphere volume of which you want to compute?: ",
      stdout);

  scanf("%f", &radius);

  volume = 4.0f / 3.0f * PI * (radius * radius * radius);

  printf("The volume of the sphere is: %f", volume);

  return 0;
}
