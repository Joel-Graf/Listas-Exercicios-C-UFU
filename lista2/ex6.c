#include <stdio.h>

int main(int argc, char const *argv[]) {
  int firstNum, secondNum, diff;
  printf("Insert the first number: ");
  scanf("%i", &firstNum);
  printf("Insert the second number: ");
  scanf("%i", &secondNum);

  diff = firstNum > secondNum ? firstNum - secondNum : secondNum - firstNum;

  printf("The difference between biggest and smallest number is: %d", diff);

  return 0;
}
