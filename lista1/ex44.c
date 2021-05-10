#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float stepHeight, targetHeight;
  int numberOfSteps;

  printf("Insert the step height: ");
  scanf("%f", &stepHeight);
  printf("Insert the target heigth: ");
  scanf("%f", &targetHeight);

  numberOfSteps = ceil(targetHeight / stepHeight);

  printf("The number of steps required is %d", numberOfSteps);

  return 0;
}