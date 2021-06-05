#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float numA, numB, numC;
  float delta, root1, root2;

  printf("Insert the value 'a': ");
  scanf("%f", &numA);
  if (numA == 0) {
    printf("Not a equation");
    return 1;
  }
  printf("Insert the value 'b': ");
  scanf("%f", &numB);
  printf("Insert the value 'c': ");
  scanf("%f", &numC);

  delta = numB * numB - 4 * numA * numC;

  if (delta < 0) {
    printf("Roots don't exist");
  } else if (delta == 0) {
    root1 = (-numB + sqrt(delta)) / 2 * numA;
    printf("Only one root: %.2f", root1);
  } else {
    root1 = (-numB + sqrt(delta)) / 2 * numA;
    root2 = (-numB - sqrt(delta)) / 2 * numA;
    printf("Exist two roots %.2f and %.2f", root1, root2);
  }

  return 0;
}
