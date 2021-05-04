#include <stdio.h>

int main(int argc, char const *argv[]) {

  float grade1, grade2, grade3, grade4;

  printf("Insert the grade(1): ");
  scanf("%f", &grade1); 
  printf("Insert the grade(2): ");
  scanf("%f", &grade2); 
  printf("Insert the grade(3): ");
  scanf("%f", &grade3); 
  printf("Insert the grade(4): ");
  scanf("%f", &grade4); 

  printf("result: %.2f", (grade1 + grade2 + grade3 + grade4)/4.0);

  return 0;
}