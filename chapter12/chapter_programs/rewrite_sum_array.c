int sum_array(const int a[], int n) {
  int sum = 0;
  const int *p;

  sum = 0;
  for (p = a; p < a + n;) {
    sum += *p++;
  }
  return sum;
}
