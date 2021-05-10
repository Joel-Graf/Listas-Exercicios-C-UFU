#include <stdio.h>

int main(int argc, char const *argv[]) {
  float bet1, bet2, bet3, betTotal, prize;

  printf("Insert the first bet: ");
  scanf("%f", &bet1);
  printf("Insert the first bet: ");
  scanf("%f", &bet2);
  printf("Insert the first bet: ");
  scanf("%f", &bet3);
  printf("Insert prize value: ");
  scanf("%f", &prize);

  betTotal = bet1 + bet2 + bet3;

  bet1 = bet1 * 100.0 / betTotal;
  bet2 = bet2 * 100.0 / betTotal;
  bet3 = bet3 * 100.0 / betTotal;

  bet1 = bet1 * prize;
  bet2 = bet2 * prize;
  bet3 = bet3 * prize;

  printf("Bet1: %.2f\nBet2: %.2f\nBet3: %.2f", bet1, bet2, bet3);

  return 0;
}