#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float heigth, radius, volume;

  printf("Insert the heigth of the Cilinder: ");
  scanf("%f", &heigth);

  printf("Insert the radius of the Cilinder: ");
  scanf("%f", &radius);

  volume = M_PI * pow(radius, 2) * heigth;

  printf("The resulting volume is %.2f", volume);

  return 0;
}