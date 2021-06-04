#include <stdio.h>

float sum(float num1, float num2);
float difference(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main(int argc, char const *argv[]) {
  int option;
  float num1, num2, result;

  printf("-=-=-=|| MENU ||=-=-=-\n");
  printf("1 - Sum of two numbers\n");
  printf("2 - Diference of two numbers\n");
  printf("3 - Product of two numbers\n");
  printf("4 - Division of two numbers\n");
  printf("-=-=-=-=-=||=-=-=-=-=-\n");

  printf("\nInsert your option: ");
  scanf("%d", &option);
  printf("\nInsert first number: ");
  scanf("%f", &num1);
  printf("\bInsert second number: ");
  scanf("%f", &num2);

  switch (option) {
    case 1:
      result = sum(num1, num2);
      break;
    case 2:
      result = difference(num1, num2);
      break;
    case 3:
      result = multiply(num1, num2);
      break;
    case 4:
      if (num2 == 0) {
        printf("Can't divide by 0");
        return 1;
      }
      result = divide(num1, num2);
      break;
  }
  printf("\nResult: %.2f", result);
  return 0;
}

float sum(float num1, float num2) { return num1 + num2; };
float difference(float num1, float num2) {
  return num1 > num2 ? num1 - num2 : num2 - num1;
};
float multiply(float num1, float num2) { return num1 * num2; };
float divide(float num1, float num2) { return num1 / num2; };