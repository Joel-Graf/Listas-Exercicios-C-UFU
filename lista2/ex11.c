#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number, sum = 0;

  printf("Insert an integer: ");
  scanf("%d", &number);

  if (number < 0) return 1;

  while (number != 0) {
    sum += number % 10;
    number /= 10;
  }

  printf("Sum is: %d", sum);

  return 0;
}
