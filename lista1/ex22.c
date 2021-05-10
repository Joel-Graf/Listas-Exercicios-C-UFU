#include <stdio.h>

int main(int argc, char const *argv[]) {
  float yards, meters;

  printf("Insert a distance in yards: ");
  scanf("%f", &yards);

  meters = 0.91 * yards;

  printf("%.2f in yards is equal to %.2f meters", yards, meters);

  return 0;
}