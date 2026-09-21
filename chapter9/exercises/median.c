double median(double x, double y, double z) {
  double answ = x;

  if ((x <= y && y <= z) || (z <= y && y <= x)) {
    answ = y;
  }
  if ((x <= z && z <= y) || (y <= z && z <= x)) {
    answ = z;
  }

  return answ;
}
