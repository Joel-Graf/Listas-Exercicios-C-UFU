#include <stdio.h>

int main(int argc, char const *argv[]) {
  float kilograms, pounds;

  printf("Insert weigth in kilograms: ");
  scanf("%f", &kilograms);

  pounds = kilograms / 0.45;

  printf("%.2f in kilograms equal %.2f pounds", kilograms, pounds);

  return 0;
}