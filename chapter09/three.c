#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void print_array(char walk[10][10]) {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%c ", walk[i][j]);
    }
    puts("");
  }

  return;
}

void generate_random_walk(char walk[10][10]) {
  char current = 'A';
  int counter = 25;
  int i = 0;
  int j = 0;
  int move;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      walk[i][j] = '.';
    }
  }

  walk[0][0] = 'A';

  srand((unsigned)time(NULL));

  while (counter > 0) {
    if (!((i != 0 && walk[i - 1][j] == '.') || (j != 9 && walk[i][j + 1] == '.') ||
          (j != 0 && walk[i][j - 1] == '.') || (i != 9 && walk[i + 1][j] == '.'))) {
      break;
    }

    move = rand() % 4;

    if (move == 0 && i != 0 && walk[i - 1][j] == '.') {
      walk[--i][j] = (++current);
      counter -= 1;
      continue;
    }
    if (move == 1 && j != 9 && walk[i][j + 1] == '.') {
      walk[i][++j] = (++current);
      counter -= 1;
      continue;
    }
    if (move == 2 && i != 9 && walk[i + 1][j] == '.') {
      walk[++i][j] = (++current);
      counter -= 1;
      continue;
    }
    if (move == 3 && j != 0 && walk[i][j - 1] == '.') {
      walk[i][--j] = (++current);
      counter -= 1;
      continue;
    }
  }
}

int main(void) {
  char arr[10][10] = {0};

  generate_random_walk(arr);
  print_array(arr);

  return 0;
}
