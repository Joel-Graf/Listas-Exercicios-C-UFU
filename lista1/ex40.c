#include <stdio.h>

int main(int argc, char const *argv[]) {

  float const costPerDay = 30;
  int daysWorked; 
  float cost, liquidCost; 

  printf("Insert the days worked: ");  
  scanf("%d", &daysWorked);

  cost = daysWorked*costPerDay;
  liquidCost = cost - (cost*0.8);

  printf("Liquid cost: %.2f", liquidCost);

  return 0;
}