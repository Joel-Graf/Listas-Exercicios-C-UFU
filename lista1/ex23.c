#include <stdio.h>

int main(int argc, char const *argv[]) {
  float meters, yards;

  printf("Insert a distance in meters: ");
  scanf("%f", &meters);

  yards = meters / 0.91;

  printf("%.2f in meters is equal to %.2f yards", meters, yards);

  return 0;
}