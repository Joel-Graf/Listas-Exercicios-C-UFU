#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number, reversedNumber = 0;

  printf("Insert a four digit number: ");
  scanf("%d", &number);

  // Reverse the number
  while (number != 0) {
    reversedNumber *= 10;
    reversedNumber += number % 10;
    number /= 10;
  }

  // Print a digit per line
  while (reversedNumber != 0) {
    printf("%d\n", reversedNumber % 10);
    reversedNumber /= 10;
  }

  return 0;
}