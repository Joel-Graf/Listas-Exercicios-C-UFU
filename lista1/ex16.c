#include <stdio.h>

int main(int argc, char const *argv[]) {
  float inches, centimeters;

  printf("Insert a length in inches: ");
  scanf("%f", &inches);

  centimeters = inches * 2.54;

  printf("%.2f in inches is equal to %.2f centimeters", inches, centimeters);

  return 0;
}