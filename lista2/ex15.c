#include <stdio.h>

int main(int argc, char const *argv[]) {
  int dayOfWeek;

  printf("Insert the day of week: ");
  scanf("%d", &dayOfWeek);

  switch (dayOfWeek) {
    case 1:
      printf("Sunday");
      break;
    case 2:
      printf("Monday");
      break;
    case 3:
      printf("Tuesday");
      break;
    case 4:
      printf("Wednesday");
      break;
    case 5:
      printf("Thursday");
      break;
    case 6:
      printf("Friday");
      break;
    case 7:
      printf("Saturday");
      break;
    default:
      printf("Invalid day of week");
      break;
  }

  return 0;
}
