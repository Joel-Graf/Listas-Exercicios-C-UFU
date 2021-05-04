#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  float num;
  
  printf("Insert an Float: ");
  scanf("%f", &num);
  
  printf("%.2f^2 = %.2f", num, num*num);

  return 0;
}
