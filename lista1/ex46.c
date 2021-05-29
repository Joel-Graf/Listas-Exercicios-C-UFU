#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number, reversedNumber = 0;

  printf("Insert a three digit number: ");
  scanf("%d", &number);

  while (number != 0) {
    reversedNumber *= 10;
    reversedNumber += number % 10;
    number /= 10;
  }

  printf("Reversed number: %d", reversedNumber);
  return 0;
}