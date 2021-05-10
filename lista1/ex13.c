#include <stdio.h>

int main(int argc, char const *argv[]) {
  float kilometers, miles;

  printf("Insert a distance in kilometers: ");
  scanf("%f", &kilometers);

  miles = kilometers / 1.61;

  printf("%.2f kilometers is equal to %.2f miles", kilometers, miles);

  return 0;
}