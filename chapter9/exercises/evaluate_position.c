int evaluate_position(char board[8][8]) {
  int eval = 0;

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      switch (board[i][j]) {

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
  }

  return eval;
}
