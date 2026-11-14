void split_date(int day_of_year, int year, int *month, int *day) {
  int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int days_so_far = 0;
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    days_in_month[1]++;
  }

  for (int i = 0; i < 12; i++) {
    if (day_of_year - (days_so_far + days_in_month[i]) <= 0) {
      *month = i + 1;
      *day = day_of_year - days_so_far;
      break;
    }
    days_so_far += days_in_month[i];
  }
}
