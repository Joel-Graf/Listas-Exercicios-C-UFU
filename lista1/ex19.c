#include <stdio.h>

int main(int argc, char const *argv[]) {
  float liters, cubics;

  printf("Insert a volume in liters: ");
  scanf("%f", &liters);

  cubics = liters / 1000.0;

  printf("%.2f in liters is equal to %.2f cubics", liters, cubics);

  return 0;
}