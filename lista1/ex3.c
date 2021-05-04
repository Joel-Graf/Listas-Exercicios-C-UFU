#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  int num1, num2, num3;
  
  printf("Insert an Integer(1): ");
  scanf("%d", &num1);

  printf("Insert an Integer(2): ");
  scanf("%d", &num2);

  printf("Insert an Integer(3): ");
  scanf("%d", &num3);
  
  printf("The somatory: %d + %d + %d = %d", num1, num2, num3, num1+num2+num3);

  return 0;
}
