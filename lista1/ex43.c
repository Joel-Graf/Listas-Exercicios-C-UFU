#include <stdio.h>

int main(int argc, char const *argv[]) {
  float price, priceWithDiscount;

  printf("Insert the price: ");
  scanf("%f", &price);

  priceWithDiscount = price * 0.9;

  printf("Price with 10%% discount: %.2f", priceWithDiscount);
  printf("\nPortion of the price (3x): %.2f", price / 3);
  printf("\nSeller comission in case of payment in cash: %.2f",
         priceWithDiscount * 1.05);
  printf("\nSeller comission in case of payment parceled out: %.2f",
         price * 1.05);

  return 0;
}