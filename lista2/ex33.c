#include <stdio.h>

int main(int argc, char const *argv[]) {
  float price;

  printf("Insert the price: ");
  scanf("%f", &price);

  if (price < 50) {
    price *= 1.05;
  } else if (price <= 100) {
    price *= 1.10;
  } else {
    price *= 1.15;
  }

  printf("Final price: %.2f", price);

  if (price < 80) {
    printf("Cheap");
  } else if (price <= 120) {
    printf("Normal");
  } else if (price <= 200) {
    printf("Expensive");
  } else {
    printf("Very expensive");
  }
  return 0;
}
