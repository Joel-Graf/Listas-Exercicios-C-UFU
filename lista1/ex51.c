#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} Point;

int main(int argc, char const *argv[]) {
  Point point;
  float result;

  printf("Insert point(x): ");
  scanf("%d", &point.x);
  printf("Insert point(y): ");
  scanf("%d", &point.y);

  result = sqrt(pow(point.x, 2) + pow(point.y, 2));

  printf("Distance from origin: %.2f", result);

  return 0;
}