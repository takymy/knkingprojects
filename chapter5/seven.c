#include <stdio.h>

int main(void) {
  int a, b, c, d, max, min, max2, min2;

  fputs("Enter four integers: ", stdout);
  scanf("%d %d %d %d", &a, &b, &c, &d);

  min = b;
  max = a;

  min2 = d;
  max2 = c;
  if (min >= max) {
    max = b;
    min = a;
  }
  if (min2 >= max2) {
    max2 = d;
    min2 = c;
  }
  if (max2 >= max) {
    max = max2;
  }
  if (min2 <= min) {
    min = min2;
  }

  printf("Largest: %d\n", max);
  printf("Smallest: %d\n", min);

  return 0;
}
