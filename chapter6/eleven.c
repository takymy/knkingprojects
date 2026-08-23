#include <stdio.h>

int main(void) {
  float e = 0, j = 1;
  int n;

  fputs("Enter n: ", stdout);
  scanf("%d", &n);

  for (int i = 0; i <= n; i++) {
    e = e + (1.0 / j);
    j = j * (i + 1.0);
  }

  printf("%.4f\n", e);
}
