#include <stdio.h>

int main(int argc, char const *argv[]) {
  float length, width, price;

  printf("Insert the length of the field: ");
  scanf("%f", &length);
  printf("Insert the width of the field: ");
  scanf("%f", &width);
  printf("Insert the price of the fence: ");
  scanf("%f", &price);

  printf("Total price: %.2f", (length * 2 + width * 2) * price);

  return 0;
}