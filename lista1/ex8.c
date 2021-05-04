#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  float kelvin, celsius;
  
  printf("Insert an temperature in kelvin: ");
  scanf("%f", &kelvin);
  
  celsius = kelvin - 273.15;

  printf("%.2f kelvin is equal to %.2f in celsius.", kelvin, celsius);

  return 0;
}
