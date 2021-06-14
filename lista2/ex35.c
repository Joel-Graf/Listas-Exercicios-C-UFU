#include <stdio.h>

int main(int argc, char const *argv[]) {
  int day, month, year, daysLimit;

  printf("Insert the day: ");
  scanf("%d", &day);
  if (day < 0 || day > 31) {
    printf("Invalid day");
    return 1;
  }

  printf("Insert the month: ");
  scanf("%d", &month);

  switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      daysLimit = 31;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      daysLimit = 31;
      break;
    case 2:
      // Consider the upper limit
      daysLimit = 29;
      break;
    default:
      printf("Invalid month");
      return 1;
      break;
  }
  if (day > daysLimit) {
    printf("Invalid date, month limit is %d days", daysLimit);
    return 1;
  }

  printf("Insert the year: ");
  scanf("%d", &year);
  if (month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
    daysLimit--;
  if (day > daysLimit) {
    printf("Invalid date, month limit is %d days", daysLimit);
    return 1;
  }
  
  printf("%d/%d/%d is a valid date", day, month, year);

  return 0;
}
