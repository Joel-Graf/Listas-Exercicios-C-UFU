#include <stdio.h>

int main(int argc, char const *argv[]) {
  float hectares, meters;

  printf("Insert an area in square hectares: ");
  scanf("%f", &hectares);

  meters = hectares * 10000;

  printf("%.2f hectares is %.2f meters", hectares, meters);

  return 0;
}