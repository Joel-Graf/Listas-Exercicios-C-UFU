#include <stdio.h>

int main(int argc, char const *argv[]) {
  char gender;
  float height;

  // Get the gender
  printf("Insert your gender (M/F): ");
  scanf("%c", &gender);

  // Validate the gender
  if (gender != 'M' && gender != 'F') {
    printf("Invalid gender!");
    return 1;
  }

  // Get the height
  printf("Insert your height: ");
  scanf("%f", &height);

  // Calculate IMC
  if (gender == 'M') {
    printf("Your ideal weight is %.2f", 72.2 * height - 58.0);
  } else if (gender == 'F') {
    printf("Your ideal weight is %.2f", 62.1 * height - 44.7);
  }

  return 0;
}
