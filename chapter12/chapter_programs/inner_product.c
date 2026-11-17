double inner_product(const double *a, const double *b, int n) {
  double sum = 0.0;
  const double *p = a + n;

  for (; a < p; (a++, b++)) {
    sum += *a * *b;
  }

  return sum;
}
