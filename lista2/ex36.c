#include <stdio.h>

int main(int argc, char const *argv[]) {
  float value, commission;

  printf("Insert the value: ");
  scanf("%f", &value);

  if (value < 20000) {
    commission = 400 + value * 1.14;
  } else if (value < 40000) {
    commission = 500 + value * 1.14;
  } else if (value < 60000) {
    commission = 550 + value * 1.14;
  } else if (value < 80000) {
    commission = 600 + value * 1.14;
  } else if (value < 100000) {
    commission = 650 + value * 1.14;
  } else {
    commission = 700 + value * 1.16;
  }

  printf("Comission is %.2f", commission);

  return 0;
}
