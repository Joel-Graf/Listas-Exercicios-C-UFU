#include <stdio.h>

int main(int argc, char const *argv[]) {
  float num;

  printf("Insert a Float: ");
  scanf("%f", &num);

  printf("%.2f/5 = %.2f", num, num / 5.0);

  return 0;
}
