#include <stdio.h>

int main(int argc, char const *argv[]) {

  char uppercase;

  printf("Insert a letter in Uppercase: ");
  scanf("%c", &uppercase); 


  printf("Yout letter in Lowercase: %c", uppercase+32);

  return 0;
}