#include <stdio.h>

int main(int argc, char const *argv[]) {
  float grade;
  int absences, conceptPosition;
  char concept[] = {'A', 'B', 'C', 'D', 'E'};

  printf("Insert student grade: ");
  scanf("%f", &grade);
  if (grade < 0 || grade > 10) {
    printf("Invalid grade");
    return 1;
  }

  if (grade >= 9) {
    conceptPosition = 0;
  } else if (grade >= 7.5) {
    conceptPosition = 1;
  } else if (grade >= 5) {
    conceptPosition = 2;
  } else if (grade >= 4) {
    conceptPosition = 3;
  } else {
    conceptPosition = 4;
  }

  printf("Insert student absences: ");
  scanf("%d", &absences);
  if (absences > 20 && conceptPosition < 4) conceptPosition++;

  printf("Student concept is %c", concept[conceptPosition]);

  return 0;
}
