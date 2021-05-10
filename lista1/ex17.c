#include <stdio.h>

int main(int argc, char const *argv[]) {
  float centimeters, inches;

  printf("Insert a length in centimeters: ");
  scanf("%f", &centimeters);

  inches = centimeters / 2.54;

  printf("%.2f in centimeters is equal to %.2f inches", centimeters, inches);

  return 0;
}