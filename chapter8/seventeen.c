#include <stdio.h>

int main(void) {
  int n;
  int j = 0;
  int i = 0;

  puts("This program creates a magic square of a specified size.");
  puts("The size must be an odd number between 1 and 99.");
  fputs("Enter size of magic square: ", stdout);
  scanf("%d", &n);

  int array[n][n];

  j = n / 2;

  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      array[y][x] = 0;
    }
  }

  for (int counter = 1; counter <= n * n; counter++) {
    if (array[i][j] != 0) {
      if (i == n - 1 || i == n - 2) {
        if (i == n - 1) {
          i = 1;
        } else {
          i = 0;
        }
      } else {
        i += 2;
      }

      if (j == 0) {
        j = n - 1;
      } else {
        j--;
      }
    }
    array[i][j] = counter;
    if (i == 0) {
      i = n - 1;
    } else {
      i--;
    }
    if (j == n - 1) {
      j = 0;
    } else {
      j++;
    }
  }

  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      printf("%2d ", array[y][x]);
    }
    puts("");
  }

  return 0;
}
