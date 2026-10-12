/* Calculates a broker's commission */

#include <stdio.h>

int main(void) {
  float commission, value, price_per_share, rival_commision;
  int number_of_shares;

  fputs("Enter number of shares: ", stdout);
  scanf("%d", &number_of_shares);

  fputs("Enter price per share: ", stdout);
  scanf("%f", &price_per_share);

  value = number_of_shares * price_per_share;

  if (value < 2500.00f) {
    commission = 30.00f + .017f * value;
  } else if (value < 6250.00f) {
    commission = 56.00f + .0066f * value;
  } else if (value < 20000.00f) {
    commission = 76.00f + .0034f * value;
  } else if (value < 50000.00f) {
    commission = 100.00f + .0022f * value;
  } else if (value < 500000.00f) {
    commission = 155.00f + .0011f * value;
  } else {
    commission = 255.00f + .0009f * value;
  }

  if (number_of_shares < 2000) {
    rival_commision = 33.00f + 0.03f * number_of_shares;
  } else {
    rival_commision = 33.00f + 0.02f * number_of_shares;
  }

  if (commission < 39.00f)
    commission = 39.00f;

  printf("Commission: $%.2f\nRival commission: $%.2f\n", commission, rival_commision);

  return 0;
}
