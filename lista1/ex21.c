#include <stdio.h>

int main(int argc, char const *argv[]) {

  float pounds, kilograms;
  
  printf("Insert weigth in pounds: ");
  scanf("%f", &pounds); 

  kilograms = pounds*0.45;

  printf("%.2f in pounds equal %.2f in kilograms", pounds, kilograms);

  return 0;
}