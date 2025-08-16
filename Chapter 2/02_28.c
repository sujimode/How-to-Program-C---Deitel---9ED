// (Target Heart-Rate Calculator) While exercising, you can use a heart-rate
// monitor to see that your heart rate stays within a safe range suggested by your doctors
// and trainers. According to the American Heart Association (AHA) (http://bit.ly/
// AHATargetHeartRates), the formula for calculating your maximum heart rate in beats
// per minute is 220 minus your age in years. Your target heart rate is 50–85% of your
// maximum heart rate. Write a program that prompts for and inputs the user’s age and
// calculates and displays the user’s maximum heart rate and the range of the user’s tar-
// get heart rate.

#include <stdio.h>

int main(void) {
  puts("Enter your age: ");

  int age = 0;
  scanf("%d", &age);

  int maximumRate = 220 - age;
  printf("Your maximum heart rate in beats is %d\n", maximumRate);

  int averageMin = maximumRate * 0.5;
  int averageMax = maximumRate * 0.85;
  printf("Your target heart rate is between %d - %d\n", averageMin, averageMax);
}