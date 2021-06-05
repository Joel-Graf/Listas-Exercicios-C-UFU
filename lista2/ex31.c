#include <stdio.h>

int main(int argc, char const *argv[]) {
  float height, weight;
  int heightCategory, weightCategory;

  printf("Insert the height: ");
  scanf("%f", &height);
  if (height < 1.20) {
    heightCategory = 1;
  } else if (height < 1.70) {
    heightCategory = 2;
  } else {
    heightCategory = 3;
  }

  printf("Insert the weight: ");
  scanf("%f", &weight);
  if (weight < 60) {
    weightCategory = 1;
  } else if (weight < 90) {
    weightCategory = 2;
  } else {
    weightCategory = 3;
  }

  if (heightCategory == 1 && weightCategory == 1) {
    printf("Category A");
  } else if (heightCategory == 1 && weightCategory == 2) {
    printf("Category D");
  } else if (heightCategory == 1 && weightCategory == 3) {
    printf("Category G");
  } else if (heightCategory == 2 && weightCategory == 1) {
    printf("Category B");
  } else if (heightCategory == 2 && weightCategory == 2) {
    printf("Category E");
  } else if (heightCategory == 2 && weightCategory == 3) {
    printf("Category H");
  } else if (heightCategory == 3 && weightCategory == 1) {
    printf("Category C");
  } else if (heightCategory == 3 && weightCategory == 2) {
    printf("Category F");
  } else if (heightCategory == 3 && weightCategory == 3) {
    printf("Category I");
  }

  return 0;
}
