#include <stdio.h>

int main(void) {
  int num;

  fputs("Enter a two-digit number: ", stdout);
  scanf("%d", &num);

  fputs("You entered the number ", stdout);

  switch (num / 10) {
  case 1:
    switch (num % 10) {
    case 1:
      puts("eleven");
      break;
    case 2:
      puts("twelve");
      break;
    case 3:
      puts("thirteen");
      break;
    case 4:
      puts("fourteen");
      break;
    case 5:
      puts("fifteen");
      break;
    case 6:
      puts("sixteen");
      break;
    case 7:
      puts("seventeen");
      break;
    case 8:
      puts("eighteen");
      break;
    case 9:
      puts("nineteen");
      break;
    case 0:
      puts("ten");
      break;
    }
    return 0;
  case 2:
    fputs("twenty", stdout);
    break;
  case 3:
    fputs("thirty", stdout);
    break;
  case 4:
    fputs("forty", stdout);
    break;
  case 5:
    fputs("fifty", stdout);
    break;
  case 6:
    fputs("sixty", stdout);
    break;
  case 7:
    fputs("seventy", stdout);
    break;
  case 8:
    fputs("eighty", stdout);
    break;
  case 9:
    fputs("ninety", stdout);
    break;
  }

  switch (num % 10) {
  case 1:
    puts("-one");
    break;
  case 2:
    puts("-two");
    break;
  case 3:
    puts("-three");
    break;
  case 4:
    puts("-four");
    break;
  case 5:
    puts("-five");
    break;
  case 6:
    puts("-six");
    break;
  case 7:
    puts("-seven");
    break;
  case 8:
    puts("-eight");
    break;
  case 9:
    puts("-nine");
    break;
  default:
    break;
  }

  return 0;
}
