#include <stdio.h>

int main(int argc, char const *argv[]) {
  float celsius, fahrenheit;

  printf("Insert an temperature in Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = celsius * (9.0 / 5.0) + 32;

  printf("%.2f celsius is equal to %.2f fahrenheit.", celsius, fahrenheit);

  return 0;
}
