#include <stdio.h>

int main(int argc, char const *argv[]) {
  float grade1, grade2, grade3, result;

  printf("Insert lab grade: ");
  scanf("%f", &grade1);
  if (grade1 < 0 || grade1 > 10) {
    printf("The grade is invalid!");
    return 1;
  }
  printf("Insert semestral grade: ");
  scanf("%f", &grade2);
  if (grade2 < 0 || grade2 > 10) {
    printf("The grade is invalid!");
    return 1;
  }
  printf("Insert final grade: ");
  scanf("%f", &grade3);
  if (grade3 < 0 || grade3 > 10) {
    printf("The grade is invalid!");
    return 1;
  }

  result = (grade1 * 0.2 + grade2 * 0.3 + grade3 * 0.5);

  printf("Your final grade is %.2f", result);
  if (result < 3)
    printf("\nReproved");
  else if (result >= 3 && result < 5)
    printf("\nIn exam");
  else
    printf("\nAproved!");

  return 0;
}
