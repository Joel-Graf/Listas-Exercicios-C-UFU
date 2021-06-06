#include <stdio.h>

int main(int argc, char const *argv[]) {
  int code, quantity;
  float result;

  printf("Insert product code: ");
  scanf("%d", &code);
  printf("Insert quantity: ");
  scanf("%d", &quantity);

  switch (code) {
    case 100:
      result = 1.20 * quantity;
      break;
    case 101:
      result = 1.30 * quantity;
      break;
    case 102:
      result = 1.50 * quantity;
      break;
    case 103:
      result = 1.20 * quantity;
      break;
    case 104:
      result = 1.70 * quantity;
      break;
    case 105:
      result = 2.20 * quantity;
      break;
    case 106:
      result = 1.00 * quantity;
      break;
    default:
      printf("invalid code!");
      return 1;
      break;
  }

  printf("Final price: %.2f", result);
  return 0;
}
