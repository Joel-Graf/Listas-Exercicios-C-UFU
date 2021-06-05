#include <stdio.h>

int main(int argc, char const *argv[]) {
  float distance, gasoline, literPerKm;

  printf("Insert the distance in Km: ");
  scanf("%f", &distance);
  printf("Insert the gasoline consumed in Liters: ");
  scanf("%f", &gasoline);

  literPerKm = distance/gasoline;

  if(literPerKm < 8) {
    printf("Sell the car");
  } else if (literPerKm <= 14) {
    printf("Economic");
  } else {
    printf("Super economic");
  }

  return 0;
}
