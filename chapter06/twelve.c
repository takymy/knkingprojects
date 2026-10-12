#include <stdio.h>

int main(void) {
  float e = 0, j = 1, eu;
  int n;

  fputs("Enter n and ε:  ", stdout);
  scanf("%d %f", &n, &eu);

  for (int i = 0; i <= n; i++) {
    float term = (1.0 / j);
    if (term < eu) {
      break;
    }
    e = e + term;
    j = j * (i + 1.0);
  }

  printf("%.4f\n", e);
}
