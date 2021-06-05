#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a, b, input, correctCount = 0;
  int i;
  for (i = 0; i < 5; i++) {
    a = rand() % 100;
    b = rand() % 100;
    printf("%d + %d: ", a, b);
    scanf("%d", &input);
    if (input == a + b) correctCount++;
    printf("%d + %d: %d\n\n", a, b, a + b);
  }
  printf("You made %d correct answers", correctCount);
  return 0;
}
