#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  float kilometersPerHour, metersPerSecond;
  
  printf("Insert the velocity in km/h: ");
  scanf("%f", &kilometersPerHour);
  
  metersPerSecond = kilometersPerHour/3.6;

  printf("%.2f Km/h is equal to %.2f M/s.", kilometersPerHour, metersPerSecond);

  return 0;
}
