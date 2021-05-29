#include <stdio.h>

int main(int argc, char const *argv[]) {
  int firstNum, secondNum;
  printf("Insert the first number: ");
  scanf("%i", &firstNum);
  printf("Insert the second number: ");
  scanf("%i", &secondNum);

  if (firstNum > secondNum) {
    printf("The biggest number is %d", firstNum);
  } else if (secondNum > firstNum) {
    printf("The biggest number is %d", secondNum);
  } else {
    printf("The numbers are equal");
  }

  return 0;
}
