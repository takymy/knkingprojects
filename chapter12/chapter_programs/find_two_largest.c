void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
  const int *current;
  if (*a > *(a + 1)) {
    *largest = *a;
    *second_largest = *(a + 1);
  } else {
    *largest = *(a + 1);
    *second_largest = *a;
  }

  for (current = a + 2; current < a + n; current++) {
    if (*current > *largest) {
      *second_largest = *largest;
      *largest = *current;
    } else if (*current > *second_largest) {
      *second_largest = *current;
    }
  }
}
