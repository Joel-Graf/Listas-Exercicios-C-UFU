#include <stdio.h>

int validateGrade(float grade) {
  if (grade <= 10.0 && grade >= 0.0) {
    return 1;
  } else {
    printf("Grade invalid! Program finished");
    return 0;
  }
}

int main(int argc, char const *argv[]) {
  float firstGrade, secondGrade;

  printf("Insert the first grade: ");
  scanf("%f", &firstGrade);
  if (!validateGrade(firstGrade)) return 1;

  printf("Insert the second grade: ");
  scanf("%f", &secondGrade);
  if (!validateGrade(secondGrade)) return 1;

  printf("Insert the second grade: %.2f", (firstGrade + secondGrade) / 2.0);

  return 0;
}
