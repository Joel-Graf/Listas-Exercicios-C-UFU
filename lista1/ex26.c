#include <stdio.h>

int main(int argc, char const *argv[]) {
  float meters, hectares;

  printf("Insert an area in square meters: ");
  scanf("%f", &meters);

  hectares = meters * 0.0001;

  printf("%.2f meters is %.2f hectares", meters, hectares);

  return 0;
}