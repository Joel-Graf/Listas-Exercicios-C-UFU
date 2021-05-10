#include <stdio.h>

int main(int argc, char const *argv[]) {
  float const prize = 780000;

  printf("First winner prize: %.2f", prize * 0.46);
  printf("Second winner prize: %.2f", prize * 0.32);
  printf("Third winner prize: %.2f", prize * 0.22);

  return 0;
}