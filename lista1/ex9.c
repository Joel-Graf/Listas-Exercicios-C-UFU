#include <stdio.h>

int main(int argc, char const *argv[]) {
  float celsius, kelvin;

  printf("Insert an temperature in celsius: ");
  scanf("%f", &celsius);

  kelvin = celsius + 273.15;

  printf("%.2f celsius is equal to %.2f kevin.", celsius, kelvin);

  return 0;
}
