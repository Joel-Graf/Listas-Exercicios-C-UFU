#include <stdio.h>

int main(int argc, char const *argv[]) {
  float salary, loan;

  printf("Insert your salary: ");
  scanf("%f", &salary);

  printf("Insert the loan you want: ");
  scanf("%f", &loan);

  if(loan > salary * 0.2) {
    printf("Loan not conceded");
  } else {
    printf("Loan conceded!");
  }

  return 0;
}
