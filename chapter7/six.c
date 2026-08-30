#include <stdio.h>

int main(void) {
  printf(
      "int: %zu bit\nshort: %zu bit\nlong: %zu bit\nfloat: %zu bit\ndouble: %zu bit\nlong double: %zu bit\n",
      sizeof(int) * 8, sizeof(short) * 8, sizeof(long) * 8, sizeof(float) * 8, sizeof(double) * 8,
      sizeof(long double) * 8);

  return 0;
}
