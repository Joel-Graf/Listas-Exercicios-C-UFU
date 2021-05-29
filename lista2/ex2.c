#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  float num;
  printf("Insert a number: ");
  scanf("%f", &num);

  if (num >= 0) {
    printf("The square root is: %.2f", sqrt(num));
  } else {
    printf("Not possible to calculate square root");
  }

  return 0;
}
