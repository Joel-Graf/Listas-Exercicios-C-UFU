#include <stdio.h>

int main(int argc, char const *argv[]) {
  int age;

  printf("Insert the age of the swimmer: ");
  scanf("%d", &age);

  if (age < 5) {
    printf("Invalid age");
  } else if (age <= 7) {
    printf("Child A");
  } else if (age <= 10) {
    printf("Child B");
  } else if (age <= 13) {
    printf("Teen A");
  } else if (age <= 17) {
    printf("Teen B");
  } else {
    printf("Senior");
  }

  return 0;
}
