#define N 10

int main(void) {
  double ident[N][N];
  int counter = N + 1;
  double *p;

  for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++) {
    if (counter == N + 1) {
      *p = 1.0;
      counter--;
    } else {
      *p = 0.0;
      counter--;
    }

    if (counter == 0) {
      counter = N + 1;
    }
  }

  return 0;
}
