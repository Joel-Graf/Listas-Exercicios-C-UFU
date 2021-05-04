#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  float celsius, fahrenheit;
  
  printf("Insert an temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);
  
  celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

  printf("%.2f fahrenheit is equal to %.2f in celsius.", fahrenheit, celsius);

  return 0;
}
