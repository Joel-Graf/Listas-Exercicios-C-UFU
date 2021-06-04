#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number;

  printf("Insert an integer: ");
  scanf("%d", &number);

  if ((number % 3 == 0 || number % 5 == 0) && number % 15 != 0) printf("It's divisible by 3 or 5");

  return 0;
}
