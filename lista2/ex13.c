#include <stdio.h>

int main(int argc, char const *argv[]) {
  float grade1, grade2, grade3, finalGrade;

  printf("Insert first grade: ");
  scanf("%f", &grade1);
  printf("Insert second grade: ");
  scanf("%f", &grade2);
  printf("Insert third grade: ");
  scanf("%f", &grade3);

  finalGrade = (grade1 + grade2 + grade3 * 2) / 4;

  printf("Your final grade is %.2f", finalGrade);
  if (finalGrade > 6)
    printf("\nAproved!");
  else
    printf("\nReproved");

  return 0;
}
