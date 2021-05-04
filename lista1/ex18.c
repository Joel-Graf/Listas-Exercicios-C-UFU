#include <stdio.h>

int main(int argc, char const *argv[]) {

  float cubics, liters;
  
  printf("Insert a volume in cubics: ");
  scanf("%f", &cubics); 

  liters = 1000.0 * cubics;

  printf("%.2f in cubics equal %.2f in liters", cubics, liters);

  return 0;
}