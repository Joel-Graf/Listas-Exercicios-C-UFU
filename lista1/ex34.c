#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float radius, area;

  printf("Insert the radius of a circle: ");
  scanf("%f", &radius);

  area = M_PI * pow(radius, 2);

  printf("The circle area is %.2f", area);

  return 0;
}