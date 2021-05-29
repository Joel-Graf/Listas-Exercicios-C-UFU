#include <stdio.h>

int main(int argc, char const *argv[]) {
  int seconds, minutes, hours;

  printf("Insert a time in seconds: ");
  scanf("%d", &seconds);

  minutes = seconds / 60;
  seconds %= 60;
  hours = minutes / 60;
  minutes %= 60;

  printf("%.2d:%.2d:%.2d", hours, minutes, seconds);
  
  return 0;
}