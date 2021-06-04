#include <stdio.h>

int main(int argc, char const *argv[]) {
  float value;
  int state;

  printf("Insert product value: ");
  scanf("%f", &value);

  printf("\n-=-=-=||States||=-=-=-\n");
  printf("1 - MG (7%%)\n");
  printf("2 - SP (12%%)\n");
  printf("3 - RJ (15%%)\n");
  printf("4 - MS (8%%)\n");
  printf("-=-=-=-=-=||=-=-=-=-=-\n");

  printf("Insert a state: ");
  scanf("%d", &state);

  switch (state) {
    case 1:
      value *= 1.07;
      break;
    case 2:
      value *= 1.12;
      break;
    case 3:
      value *= 1.15;
      break;
    case 4:
      value *= 1.08;
      break;
    default:
      printf("Invalid State");
      return 1;
      break;
  }

  printf("Final price is %.2f", value);
  return 0;
}
