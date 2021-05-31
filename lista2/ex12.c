#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number;

  printf("Insert an integer: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Invalid number!");
  } else {
    printf("Log of %d is %.2f", number, log(number));
  }

  return 0;
}
