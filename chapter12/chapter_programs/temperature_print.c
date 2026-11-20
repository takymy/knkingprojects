#include <stdio.h>

void read_temperature(int *a, int n) {
  int *p;

  for (p = a; p < a + n; p++) {
    printf("%d\n", *p);
  }
}
