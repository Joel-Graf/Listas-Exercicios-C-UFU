#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float radians, degrees;
  printf("Insert an angle in radians: ");
  scanf("%f", &radians);

  degrees = radians * 180.0 / M_PI;

  printf("%.2f in radians equal to %.2f degrees", radians, degrees);

  return 0;
}