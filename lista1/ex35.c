#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float nA, nB, hypotenuses;

  printf("Insert the value of A: ");
  scanf("%f", &nA);

  printf("Insert the value of B: ");
  scanf("%f", &nB);

  hypotenuses = sqrt(pow(nA, 2) + pow(nA, 2));

  printf("The resulting hypotenuses is %.2f", hypotenuses);

  return 0;
}