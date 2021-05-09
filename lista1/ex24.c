#include <stdio.h>

int main (int argc, char const *argv[]) {
  
  float meters, acres;

  printf("Insert an area in square meters: ");
  scanf("%f", &meters);

  acres = meters * 0.000247;

  printf("%.2f meters is %.2f acres", meters, acres);


  return 0;
}