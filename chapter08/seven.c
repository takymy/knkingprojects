#include <stdio.h>

int main(void) {
  int array[5][5] = {0};
  int rowtotals[5] = {0};
  int columntotals[5] = {0};

  for (int i = 0; i < 5; i++) {
    printf("Enter row %d: ", i + 1);

    scanf("%d %d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4]);
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      rowtotals[i] += array[i][j];
      columntotals[j] += array[i][j];
    }
  }

  fputs("Row totals: ", stdout);
  for (int i = 0; i < 5; i++) {
    printf("%d ", rowtotals[i]);
  }
  puts("");

  fputs("Column totals: ", stdout);
  for (int i = 0; i < 5; i++) {

    printf("%d ", columntotals[i]);
  }
  puts("");

  return 0;
}
