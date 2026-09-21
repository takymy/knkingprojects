int fact(int n) {
  int res = 1;

  for (int i = n; i > 1; i--) {
    res *= i;
  }

  return res;
}
