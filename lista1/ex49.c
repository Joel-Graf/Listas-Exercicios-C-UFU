#include <stdio.h>
#define SECONDS_IN_24H 86400

int main(int argc, char const *argv[]) {
  int initialSecond, initialMinute, initialHour;
  int durationInSeconds, initialTimeInSeconds, finalTimeInSeconds;
  int finalSecond, finalMinute, finalHour;

  printf("Insert the initial time of the experiment");
  printf("\nInitial initialHour: ");
  scanf("%d", &initialHour);
  printf("\nInitial initialMinute: ");
  scanf("%d", &initialMinute);
  printf("\nInitial initialSecond: ");
  scanf("%d", &initialSecond);
  printf("\nInsert the duration of the experiment in seconds: ");
  scanf("%d", &durationInSeconds);

  // Convert HH:MM:SS to seconds
  initialTimeInSeconds =
      initialHour * 3600 + initialMinute * 60 + initialSecond;
  
  // Add the duration time in seconds
  finalTimeInSeconds = initialTimeInSeconds + durationInSeconds;

  // If final time is higher then 24h, remove 24h until is a valid hour
  while (finalTimeInSeconds >= SECONDS_IN_24H) {
    finalTimeInSeconds -= SECONDS_IN_24H;
  }

  // Convert from seconds to HH:MM:SS again
  finalMinute = finalTimeInSeconds / 60;
  finalSecond = finalTimeInSeconds % 60;
  finalHour = finalMinute / 60;
  finalMinute %= 60;

  printf("Experiment ended in %.2d:%.2d:%.2d", finalHour, finalMinute,
         finalSecond);

  return 0;
}