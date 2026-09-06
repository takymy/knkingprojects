#include <stdio.h>

int main(void) {
  int array[5][5] = {0};
  int rowtotals[5] = {0};
  int columntotals[5] = {0};
  int high[5] = {0};
  int low[5] = {0};
  double avg[5] = {0};

  for (int i = 0; i < 5; i++) {
    printf("Enter row %d: ", i + 1);

    scanf("%d %d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4]);
  }
  puts("");

  for (int i = 0; i < 5; i++) {
    high[i] = array[i][0];
    low[i] = array[i][0];
    for (int j = 0; j < 5; j++) {
      if (array[i][j] > high[i]) {
        high[i] = array[i][j];
      }
      if (array[i][j] < low[i]) {
        low[i] = array[i][j];
      }
      rowtotals[i] += array[i][j];
      columntotals[j] += array[i][j];
      avg[i] += array[i][j];
    }
    avg[i] = avg[i] / 5.0;
  }

  for (int i = 0; i < 5; i++) {
    printf("Total and average score for student %d:  %d %.1f\n", i + 1, columntotals[i],
           columntotals[i] / 5.0);
  }
  puts("");

  for (int i = 0; i < 5; i++) {
    printf("Average, high and low score for quiz %d: %.1f %d %d\n", i, avg[i], high[i], low[i]);
  }

  return 0;
}
