#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float degrees, radians;
  printf("Insert an angle in degrees: ");
  scanf("%f", &degrees);

  radians = degrees * M_PI / 180.0;

  printf("%.2f in degrees equal to %.2f radians", degrees, radians);

  return 0;
}