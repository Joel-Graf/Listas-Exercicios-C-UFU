#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  float miles, kilometers;

  printf("Insert the distance in Miles: ");
  scanf("%f", &miles);

  kilometers = 1.61*miles;

  printf("%.2f miles = %.2f kilometers", miles, kilometers);

  return 0;
}
