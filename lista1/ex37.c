#include <stdio.h>

int main(int argc, char const *argv[]) {
  const float discount = 0.12;
  float price;

  printf("Insert the price of the product: ");
  scanf("%f", &price);

  printf("The price of the product with %%%.2f discount is %.2f", discount*100, price-(price*discount));

  return 0;
}