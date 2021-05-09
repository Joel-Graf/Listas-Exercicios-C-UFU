#include <stdio.h>

int main (int argc, char const *argv[]) {
  
  float acres, meters;

  printf("Insert an area in square acres: ");
  scanf("%f", &acres);

  meters = acres * 4048.58;

  printf("%.2f acres is %.2f meters", acres, meters);


  return 0;
}