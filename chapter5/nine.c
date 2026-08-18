#include <stdio.h>

int main(void) {
  int m1, d1, y1, m2, d2, y2, early;

  fputs("Enter first date (mm/dd/yy): ", stdout);
  scanf("%d/%d/%d", &m1, &d1, &y1);
  fputs("Enter second date (mm/dd/yy): ", stdout);
  scanf("%d/%d/%d", &m2, &d2, &y2);

  if (y1 < y2) {
    early = 1;
  } else if (y1 == y2) {
    if (m1 < m2) {
      early = 1;
    } else if (m1 == m2) {
      if (d1 < d2) {
        early = 1;
      } else if (d1 == d2) {
        puts("These dates are the same");
        return 0;
      } else {
        early = 0;
      }
    } else {
      early = 0;
    }

  } else {
    early = 0;
  }

  early ? printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m1, d1, y1, m2, d2, y2)
        : printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m2, d2, y2, m1, d1, y1);

  return 0;
}
