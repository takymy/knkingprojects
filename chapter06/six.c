#include <stdio.h>

int main(void) {
  int n;

  fputs("Enter a number: ", stdout);
  scanf("%d", &n);

  for (int i = 2; i * i <= n; i += 2) {
    printf("%d\n", i * i);
  }

  return 0;
}
