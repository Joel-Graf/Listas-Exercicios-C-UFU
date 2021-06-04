#include <stdio.h>

int main(int argc, char const *argv[]) {
  int employeeAge, yearsOfService;

  printf("Insert emplyee age: ");
  scanf("%d", &employeeAge);
  printf("Insert emplyee years of service: ");
  scanf("%d", &yearsOfService);
  
  if(employeeAge >= 65 || yearsOfService >= 30 || (employeeAge>=60 && yearsOfService >=25))
    printf("You can retire");
  else 
    printf("You can't retire");
    
  return 0;
}
