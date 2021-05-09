#include <stdio.h>

int main(int argc, char const *argv[]) {

  int side;

  printf("Insert the square side length: ");
  scanf("%d", &side); 

  printf("\nResult: %d", side*side);

  return 0;
}