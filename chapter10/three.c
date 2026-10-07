// ╭─────────────────────────────────────────────────────────╮
// │ Classifies a poker hand                                 │
// ╰─────────────────────────────────────────────────────────╯
#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */

int hand[5][2];

bool straight, flush, four, three;
int pairs, repeated; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

// ╭─────────────────────────────────────────────────────────╮
// │ main: Calls read_cards, analyze_hand, and print_result  │
// │ repeatedly                                              │
// ╰─────────────────────────────────────────────────────────╯
int main(void) {
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
}

// ╭─────────────────────────────────────────────────────────╮
// │ read_cards: Reads the cards into the external           │
// │ variables num_in_rank and num_in_suit; checks for bad   │
// │ cards and duplicate cards.                              │
// ╰─────────────────────────────────────────────────────────╯
void read_cards(void) {
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;
  int duplicate_flag;

  for (int i = 0; i < 5; i++) {
    hand[i][0] = -1;
    hand[i][1] = -1;
  }

  while (cards_read < NUM_CARDS) {
    bad_card = false;
    duplicate_flag = 0;

    printf("Enter a card: ");

    rank_ch = getchar();
    switch (rank_ch) {
    case '0':
      exit(EXIT_SUCCESS);
    case '2':
      rank = 0;
      break;
    case '3':
      rank = 1;
      break;
    case '4':
      rank = 2;
      break;
    case '5':
      rank = 3;
      break;
    case '6':
      rank = 4;
      break;
    case '7':
      rank = 5;
      break;
    case '8':
      rank = 6;
      break;
    case '9':
      rank = 7;
      break;
    case 't':
    case 'T':
      rank = 8;
      break;
    case 'j':
    case 'J':
      rank = 9;
      break;
    case 'q':
    case 'Q':
      rank = 10;
      break;
    case 'k':
    case 'K':
      rank = 11;
      break;
    case 'a':
    case 'A':
      rank = 12;
      break;
    default:
      bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) {
    case 'c':
    case 'C':
      suit = 0;
      break;
    case 'd':
    case 'D':
      suit = 1;
      break;
    case 'h':
    case 'H':
      suit = 2;
      break;
    case 's':
    case 'S':
      suit = 3;
      break;
    default:
      bad_card = true;
    }

    while ((ch = getchar()) != '\n') {
      if (ch != ' ') {
        bad_card = true;
      }
    }

    if (bad_card) {
      printf("Bad card; ignored.\n");
    } else {

      for (int i = 0; i < 5; i++) {
        if (hand[i][0] == rank && hand[i][1] == suit) {
          duplicate_flag = 1;
        }
      }

      if (duplicate_flag == 1) {
        printf("Duplicate card; ignored.\n");
        duplicate_flag = 0;
      } else {
        hand[cards_read][0] = rank;
        hand[cards_read][1] = suit;
        cards_read++;
      }
    }
  }
}

// ╭─────────────────────────────────────────────────────────╮
// │ analyze_hand: Determines whether the hand contains a    │
// │ straight, a flush, four-of-a-kind, and/or               │
// │ three-of-a-kind; determines the number of pairs;        │
// │ stores the results into the external variables          │
// │ straight, flush, four, three, and pairs.                │
// ╰─────────────────────────────────────────────────────────╯
void analyze_hand(void) {
  int big = hand[0][0];

  int straight_counter = 0;
  int flush_counter = 0;
  four = false;
  three = false;
  straight = false;
  flush = false;
  pairs = 0;

  /* check for flush */
  /* check for straight */
  for (int i = 0; i < 5; i++) {
    if (i < 4 && hand[i][1] == hand[i + 1][1]) {
      flush_counter++;
    }
    if (hand[i][0] >= big) {
      big = hand[i][0];
    }
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (hand[i][0] == hand[j][0] && j != i) {
        repeated++;
      }
      if (hand[j][0] == big - i) {
        straight_counter++;
      }
    }
    if (repeated == 3) {
      four = true;
    }
    if (repeated == 2) {
      three = true;
    }
    if (repeated == 1) {
      pairs++;
    }
    repeated = 0;
  }

  pairs = pairs / 2;
  if (flush_counter == 4) {
    flush = true;
  }
  if (straight_counter == 5 && !four && !three && pairs == 0) {
    straight = true;
    return;
  }
}

// ╭─────────────────────────────────────────────────────────╮
// │ prints_result: Prints the classification of the hand,   │
// │ based on the values of the external variables           │
// │ straight, flush, four, three, and pairs.                │
// ╰─────────────────────────────────────────────────────────╯
void print_result(void) {
  if (straight && flush) {
    printf("Straight flush");
  } else if (four) {
    printf("Four of a kind");
  } else if (three && pairs == 1) {
    printf("Full house");
  } else if (flush) {
    printf("Flush");
  } else if (straight) {
    printf("Straight");
  } else if (three) {
    printf("Three of a kind");
  } else if (pairs == 2) {
    printf("Two pairs");
  } else if (pairs == 1) {
    printf("Pair");
  } else {
    printf("High card");
  }
  printf("\n\n");
}
