#include <stdio.h>

int main(int argc, char const *argv[]) {
  char operation;
  float n1, n2, result;

  printf("Insert an operation (x)(/)(-)(+): ");
  scanf("%c", &operation);
  printf("Insert the first number: ");
  scanf("%f", &n1);
  printf("Insert the second number: ");
  scanf("%f", &n2);

  switch (operation) {
    case 'x':
      result = n1 * n2;
      break;
    case '/':
      result = n1 / n2;
      break;
    case '-':
      result = n1 - n2;
      break;
    case '+':
      result = n1 + n2;
      break;
    default:
      printf("Invalid Operation");
      return 1;
      break;
  }

  printf("%.2f %c %.2f = %.2f", n1, operation, n2, result);

  return 0;
}
