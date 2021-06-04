#include <stdio.h>

int main(int argc, char const *argv[]) {
  int year;

  printf("Insert a year: ");
  scanf("%d", &year);

  if (year%400==0 || (year%4==0 && year%100!=0))
    printf("Bissextile");
  else
    printf("Not Bissextile");

  return 0;
}
