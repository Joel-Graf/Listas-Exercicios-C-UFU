#include <stdio.h>

int main(int argc, char const *argv[]) {
  float value1, value2, value3;

  printf("Insert the value(1): ");
  scanf("%f", &value1);
  printf("Insert the value(2): ");
  scanf("%f", &value2);
  printf("Insert the value(3): ");
  scanf("%f", &value3);

  printf("result: %.2f", value1 * value1 + value2 * value2 + value3 * value3);

  return 0;
}