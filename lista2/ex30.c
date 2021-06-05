#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr[2];

  printf("Insert an Integer: ");
  scanf("%d", &arr[0]);
  printf("Insert an Integer: ");
  scanf("%d", &arr[1]);
  printf("Insert an Integer: ");
  scanf("%d", &arr[2]);
  
  int i, j, aux;
  for(i = 1; i < 3; i++) {
    for(j = i; j > 0; j--) {
      if (arr[j] < arr[j - 1]) {
        aux = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = aux;
      }
    }
  }

  printf("%d %d %d", arr[0], arr[1], arr[2]);

  return 0;
}
