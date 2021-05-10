#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // Time stuff
  time_t now;
  time(&now);
  struct tm *local = localtime(&now);
  int year;
  year = local->tm_year + 1900;

  int age;

  printf("Insert your age: ");
  scanf("%d", &age);

  printf("You were born in %d", year - age);

  return 0;
}