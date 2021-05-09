#include <stdio.h>

int main(int argc, char const *argv[]) {
  const float raise = 0.25;
  float salary;

  printf("Insert the employee salary: ");
  scanf("%f", &salary);

  printf("The salary of the employee with %%%.2f raise is %.2f", raise*100, salary+(salary*raise));

  return 0;
}