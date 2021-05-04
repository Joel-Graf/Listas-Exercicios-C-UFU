#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  float metersPerSecond, kilometersPerHour;
  
  printf("Insert the velocity in M/s: ");
  scanf("%f", &metersPerSecond);
  
  kilometersPerHour = 3.6 * metersPerSecond;

  printf("%.2f M/s is equal to %.2f Km/h.", metersPerSecond, kilometersPerHour);

  return 0;
}
