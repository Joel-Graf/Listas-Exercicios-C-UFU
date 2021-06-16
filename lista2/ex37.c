#include <stdio.h>
#define DAY_IN_MINUTES 1440
int isValidHours(int hours);
int isValidMinutes(int minutes);
int timeToMinutes(int hours, int minutes);

int main(int argc, char const *argv[]) {
  int hoursArrive, minutesArrive, hoursLeave, minutesLeave;
  int arriveInMinutes, leaveInMinutes, diffInMinutes, diffInHours;
  float price;

  printf("Insert the hours: ");
  scanf("%d", &hoursArrive);
  if (!isValidHours(hoursArrive)) return 1;
  printf("Insert the minutes: ");
  scanf("%d", &minutesArrive);
  if (!isValidMinutes(minutesArrive)) return 1;
  printf("Insert the hours: ");
  scanf("%d", &hoursLeave);
  if (!isValidHours(hoursLeave)) return 1;
  printf("Insert the minutes: ");
  scanf("%d", &minutesLeave);
  if (!isValidMinutes(minutesLeave)) return 1;

  arriveInMinutes = timeToMinutes(hoursArrive, minutesArrive);
  leaveInMinutes = timeToMinutes(hoursLeave, minutesLeave);

  if (arriveInMinutes < leaveInMinutes)
    diffInMinutes = leaveInMinutes - arriveInMinutes;
  else
    diffInMinutes = DAY_IN_MINUTES - (arriveInMinutes - leaveInMinutes);

  diffInHours = (int)diffInMinutes / 60;

  if (diffInHours <= 2)
    price = diffInHours;
  else if (diffInHours <= 4)
    price = diffInHours * 1.4;
  else
    price = diffInHours * 2;

  printf("Final price is %.2f for %d hours", price, diffInHours);

  return 0;
}

int isValidHours(int hours) {
  if (hours < 0 || hours >= 24) {
    printf("Invalid Hours!");
    return 0;
  }
  return 1;
}

int isValidMinutes(int minutes) {
  if (minutes < 0 || minutes >= 60) {
    printf("Invalid Minutes!");
    return 0;
  }
  return 1;
}

int timeToMinutes(int hours, int minutes) { return hours * 60 + minutes; }