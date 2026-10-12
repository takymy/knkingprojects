#include <stdio.h>

void selection_sort(int n, int arr[n]) {
  int largest = arr[0], temp, pos = 0;

  if (n == 1) {
    return;
  }

  for (int i = 1; i < n; i++) {
    if (largest <= arr[i]) {
      largest = arr[i];
      pos = i;
    }
  }

  temp = arr[n - 1];
  arr[n - 1] = largest;
  arr[pos] = temp;

  selection_sort(n - 1, arr);
}

int main(void) {
  int n;

  fputs("Enter the length of an array that you want to sort: ", stdout);

  scanf("%d", &n);

  int arr[n];

  puts("Enter a series of integers: ");

  for (int i = 0; i < n; i++) {
    printf("Enter integer number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  selection_sort(n, arr);

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
