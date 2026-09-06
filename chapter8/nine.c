#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  char arr[10][10] = {0};
  char current = 'A';
  int counter = 25;
  int i = 0;
  int j = 0;
  int move;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      arr[i][j] = '.';
    }
  }

  arr[0][0] = 'A';

  srand((unsigned)time(NULL));

  while (counter > 0) {
    if (!((i != 0 && arr[i - 1][j] == '.') || (j != 9 && arr[i][j + 1] == '.') ||
          (j != 0 && arr[i][j - 1] == '.') || (i != 9 && arr[i + 1][j] == '.'))) {
      break;
    }

    move = rand() % 4;

    if (move == 0 && i != 0 && arr[i - 1][j] == '.') {
      arr[--i][j] = (++current);
      counter -= 1;
      continue;
    }
    if (move == 1 && j != 9 && arr[i][j + 1] == '.') {
      arr[i][++j] = (++current);
      counter -= 1;
      continue;
    }
    if (move == 2 && i != 9 && arr[i + 1][j] == '.') {
      arr[++i][j] = (++current);
      counter -= 1;
      continue;
    }
    if (move == 3 && j != 0 && arr[i][j - 1] == '.') {
      arr[i][--j] = (++current);
      counter -= 1;
      continue;
    }
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%c ", arr[i][j]);
    }
    puts("");
  }

  return 0;
}
