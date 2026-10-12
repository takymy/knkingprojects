#include <stdio.h>

int main(void) {
  int m1, d1, y1, m2, d2, y2, early;
  fputs("Enter a date (mm/dd/yy): ", stdout);
  scanf("%d/%d/%d", &m1, &d1, &y1);

  for (;;) {
    fputs("Enter a date (mm/dd/yy): ", stdout);
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if (y2 == 0) {
      break;
    }

    if (y1 < y2) {
      early = 1;
    } else if (y1 == y2) {
      if (m1 < m2) {
        early = 1;
      } else if (m1 == m2) {
        if (d1 < d2) {
          early = 1;
        } else if (d1 == d2) {
          continue;
        } else {
          early = 0;
        }
      } else {
        early = 0;
      }
    } else {
      early = 0;
    }

    if (early == 0) {
      m1 = m2;
      d1 = d2;
      y1 = y2;
    }
  }

  printf("%d/%d/%.2d is the earliest date", m1, d1, y1);

  return 0;
}
