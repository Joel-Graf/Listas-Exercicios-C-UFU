#include <stdio.h>

int main(int argc, char const *argv[]) {
  int sideA, sideB, sideC;

  printf("Insert side A: ");
  scanf("%d", &sideA);
  printf("Insert side B: ");
  scanf("%d", &sideB);
  printf("Insert side C: ");
  scanf("%d", &sideC);

  if (sideA > sideB + sideC || sideB > sideA + sideC || sideC > sideA + sideB) {
    printf("Not a triangle");
    return 1;
  }

  if (sideA == sideB && sideB == sideC) {
    printf("Equilateral triangle");
  } else if (sideA == sideB || sideA == sideC || sideB == sideC) {
    printf("Isoceles triangle");
  } else {
    printf("Scalene triangle");
  }

  return 0;
}
