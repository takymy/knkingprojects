#include <stdio.h>

int main(void) {
  int item_number, month, day, year;
  float unit_price;

  fputs("Enter item number: ", stdout);
  scanf("%d", &item_number);

  fputs("Enter unit price: ", stdout);
  scanf("%f", &unit_price);

  fputs("Enter purchase date (mm/dd/yyyy): ", stdout);
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%7.2f\t%.2d/%.2d/%.4d\n", item_number,
         unit_price, month, day, year);

  return 0;
}
