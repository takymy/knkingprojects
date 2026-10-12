#include <stdio.h>

int largest(int n, int a[n]) {
  int largest = a[0];
  for (int i = 1; i < n; i++) {
    if (largest < a[i]) {
      largest = a[i];
    }
  }

  return largest;
};

double average(int n, int a[n]) {
  double sum = a[0];
  for (int i = 1; i < n; i++) {
    sum += a[i];
  }

  return sum / (float)n;
};

int num_of_pos(int n, int a[n]) {
  int counter = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      counter++;
    }
  }

  return counter;
};

int main(void) {
  int choice = 9, n;
  int ch;

  fputs("Enter number of integers in your array: ", stdout);
  scanf("%d", &n);

  int arr[n];

  fputs("Enter integers in your array separated by space: ", stdout);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  while (getchar() != '\n')
    ;

  for (;;) {
    fputs(
        "Make your choice:\n\t1: The largest element in you array\n\t2. The average of all elements in your array\n\t3. The number of positive elements in your array\n\tAnything else: exit from program\n",
        stdout);

    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("The largest element in your array is: %d\n", largest(n, arr));
      break;
    case 2:
      printf("The average of all elements in your array is: %f\n", average(n, arr));
      break;
    case 3:
      printf("The number of positive elements in your array is: %d\n", num_of_pos(n, arr));
      break;
    case 9:
      return 0;
    default:
      puts("Incorrect choice\n");
      break;
    }
  }

  return 0;
}
