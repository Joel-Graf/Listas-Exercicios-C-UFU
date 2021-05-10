#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number;

  printf("Insert an Integer: ");
  scanf("%d", &number);

  printf("Your number: %d", number);
  printf("\nYour number +1: %d", number + 1);
  printf("\nYour number -1: %d", number - 1);

  return 0;
}