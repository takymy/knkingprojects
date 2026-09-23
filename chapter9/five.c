#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]) {
  int j = n / 2;
  int i = 0;

  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      magic_square[y][x] = 0;
    }
  }

  for (int counter = 1; counter <= n * n; counter++) {
    if (magic_square[i][j] != 0) {
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
    magic_square[i][j] = counter;
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
}

void print_magic_square(int n, char magic_square[n][n]) {
  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      printf("%2d ", magic_square[y][x]);
    }
    puts("");
  }
}

int main(void) {
  int n;

  puts("This program creates a magic square of a specified size.");
  puts("The size must be an odd number between 1 and 99.");
  fputs("Enter size of magic square: ", stdout);
  scanf("%d", &n);

  char array[n][n];

  create_magic_square(n, array);

  print_magic_square(n, array);

  return 0;
}
