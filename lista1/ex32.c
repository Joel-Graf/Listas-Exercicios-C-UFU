#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number;

  printf("Insert an Integer: ");
  scanf("%d", &number);

  printf("Your number: %d", number);
  printf("\nResult: %d", (number * 3 + 1) + (number * 2 - 1));

  return 0;
}