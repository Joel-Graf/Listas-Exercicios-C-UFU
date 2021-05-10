#include <stdio.h>

int main(int argc, char const *argv[]) {
  float pounds, kilograms;

  printf("Insert weigth in pounds: ");
  scanf("%f", &pounds);

  kilograms = pounds * 0.45;

  printf("%.2f in pounds equal to %.2f kilograms", pounds, kilograms);

  return 0;
}