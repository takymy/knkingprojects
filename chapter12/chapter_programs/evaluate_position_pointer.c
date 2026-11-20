int evaluate_position(char board[8][8]) {
  int eval = 0;
  char *p;

  for (p = &board[0][0]; p <= &board[7][7]; p++) {
    switch (*p) {

    case 'q':
      eval -= 9;
      break;
    case 'r':
      eval -= 5;
      break;
    case 'b':
      eval -= 3;
      break;
    case 'n':
      eval -= 3;
      break;
    case 'p':
      eval -= 1;
      break;

    case 'Q':
      eval += 9;
      break;
    case 'R':
      eval += 5;
      break;
    case 'B':
      eval += 3;
      break;
    case 'N':
      eval += 3;
      break;
    case 'P':
      eval += 1;
      break;

    default:
      break;
    }
  }

  return eval;
}
