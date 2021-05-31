#include <stdio.h>

int main(int argc, char const *argv[]) {
  float smallBase, bigBase, height;

  printf("Insert a smallest base: ");
  scanf("%f", &smallBase);
  if (smallBase < 0) {
    printf("The smallest base is invalid!");
    return 1;
  }
  printf("Insert a bigger base: ");
  scanf("%f", &bigBase);
  if (bigBase < 0) {
    printf("The smallest base is invalid!");
    return 1;
  }
  printf("Insert the height: ");
  scanf("%f", &height);
  if (height < 0) {
    printf("The height is invalid!");
    return 1;
  }

  printf("The trapezoid area is %.2f", (smallBase + bigBase) * height / 2);

  return 0;
}
