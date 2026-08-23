/* Balances a checkbook */

#include <stdio.h>

int main(void) {
  int cmd;
  float balance = 0.0f, credit, debit;

  puts("*** ACME checbook-balancing program ***");
  puts("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

  for (;;) {
    fputs("Enter command: ", stdout);
    scanf("%d", &cmd);
    switch (cmd) {
    case 0:
      balance = 0.0f;
      break;
    case 1:
      fputs("Enter amount of credit: ", stdout);
      scanf("%f", &credit);
      balance += credit;
      break;
    case 2:
      fputs("Enter amount of debit: ", stdout);
      scanf("%f", &debit);
      balance -= debit;
      break;
    case 3:
      printf("Current balance: $%.2f\n", balance);
      break;
    case 4:
      return 0;
    default:
      puts("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
      break;
    }
  }
}
