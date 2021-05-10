#include <stdio.h>

int main(int argc, char const *argv[]) {

  float const bonus = 0.1;
  float hourCost, hours, cost, totalCost; 

  printf("Insert the cost of the hour: ");  
  scanf("%f", &hourCost);

  printf("Insert worked hours: ");  
  scanf("%f", &hours);

  cost = hourCost*hours;
  totalCost = cost + (cost*bonus);

  printf("Total cost: %.2f", totalCost);

  return 0;
}