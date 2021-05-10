#include <stdio.h>

int main(int argc, char const *argv[]) {
  float real, dollarCotation;

  printf("Insert the value in Real: ");
  scanf("%f", &real);
  printf("Insert Dollar cotation: ");
  scanf("%f", &dollarCotation);

  printf("result: %.2f reais", real * dollarCotation);

  return 0;
}