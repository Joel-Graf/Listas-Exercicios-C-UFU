#include <stdio.h>

int main(int argc, char const *argv[]) {
  float baseSalary, finalSalary;

  printf("Insert the base salary of the employee: ");
  scanf("%f", &baseSalary);

  finalSalary = baseSalary + (baseSalary * 0.2);

  printf("Final salary: %.2f", finalSalary);

  return 0;
}