#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  char option;
  float x, y, z;

  printf("-=-=|| Calculate ||=-=-\n");
  printf("A - Geometric mean\n");
  printf("B - Weighted average\n");
  printf("C - Harmonic average\n");
  printf("D - Arithmetic average\n");
  printf("-=-=-=-=-=||=-=-=-=-=-\n");

  printf("Insert your option: ");
  scanf("%c", &option);
  if (!(option == 'A' || option == 'B' || option == 'C' || option == 'D')) {
    printf("Invalid option");
    return 1;
  }

  printf("Insert the value 'x': ");
  scanf("%f", &x);
  printf("Insert the value 'y': ");
  scanf("%f", &y);
  printf("Insert the value 'z': ");
  scanf("%f", &z);

  switch (option) {
    case 'A':
      printf("Result: %.2f", cbrt(x * y * z));
      break;
    case 'B':
      printf("Result: %.2f", (x + 2 * y + 3 * z) / 6);
      break;
    case 'C':
      printf("Result: %.2f", 1 / (1 / x + 1 / y + 1 / z));
      break;
    case 'D':
      printf("Result: %.2f", (x + y + z) / 3);
      break;
  }

  return 0;
}
