#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num;
  printf("Insert a number: ");
  scanf("%d", &num);

  if(num%2==0) {
    printf("The number is pair");
  } else {
    printf("The number is odd");
  }

  return 0;
}
