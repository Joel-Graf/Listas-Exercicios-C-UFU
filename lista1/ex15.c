#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  float radians, degrees;
  printf("Insert an angle in radians: ");
  scanf("%f", &radians);

  degrees = radians * 180.0 / M_PI;

  printf("%.2f in radians equal %.2f in degrees", radians, degrees);

  return 0;
}