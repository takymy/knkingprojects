#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void) {

  int fst = rand() % 6 + 1, snd = rand() % 6 + 1;

  return fst + snd;
}

bool play_game(void) {
  int score = roll_dice();
  int point = score;

  printf("You rolled: %d\n", score);
  if (score == 7 || score == 11) {
    puts("You win!\n");
    return 1;
  }
  if (score == 2 || score == 3 || score == 12) {
    puts("You lose!\n");
    return 0;
  }

  printf("Your point is %d\n", point);

  for (;;) {
    score = roll_dice();

    printf("You rolled: %d\n", score);
    if (score == point) {
      puts("You win!\n");
      return 1;
    }
    if (score == 7) {
      puts("You lose!\n");
      return 0;
    }
  }
}

int main(void) {
  int ch;
  int wins = 0, losses = 0;

  srand((unsigned)time(NULL));

  if (play_game()) {
    wins++;
  } else {
    losses++;
  }

  for (;;) {
    fputs("Play again? ", stdout);
    if (toupper(ch = getchar()) != 'Y') {
      printf("Wins: %d  Losses: %d", wins, losses);
      return 0;
    } else {
      if (play_game()) {
        wins++;
      } else {
        losses++;
      }
    }

    getchar();
  }

  return 0;
}
