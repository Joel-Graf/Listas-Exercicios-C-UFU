#include <stdio.h>

int main(int argc, char const *argv[]) {
  int firstNum, secondNum, biggestNum;
  printf("Insert the first number: ");
  scanf("%i", &firstNum);
  printf("Insert the second number: ");
  scanf("%i", &secondNum);

  biggestNum = firstNum > secondNum ? firstNum : secondNum;

  printf("The biggest number is %d", biggestNum);

  return 0;
}
