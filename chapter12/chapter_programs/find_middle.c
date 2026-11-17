int *find_middle(int a[], int n) {
  int *p = a + n;

  return (p - a) / 2 + a;
}
