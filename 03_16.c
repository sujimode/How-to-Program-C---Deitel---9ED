// (Gas Mileage) Drivers are concerned with the mileage obtained by their auto-
// mobiles. One driver has kept track of several tankfuls of gasoline by recording miles
// driven and gallons used for each tankful. Develop a program that uses scanf to input
// the miles driven and gallons used for each tankful. The program should calculate and
// display the miles per gallon obtained for each tankful. After processing all input in-
// formation, the program should calculate and print the combined miles per gallon ob-
// tained for all tankfuls.

#include <stdio.h>

int main(void) {
  float gallons = 0;
  float miles = 0;
  float tGallons = 0;
  float tMiles = 0;

  printf("%s", "Enter the gallons used (-1 to end): ");
  scanf("%f", &gallons);

  while (gallons != -1) {
    tGallons += gallons;

    printf("%s", "Enter the miles driven: ");
    scanf("%f", &miles);
    tMiles += miles;

    float average = miles / gallons;
    printf("The average miles per gallons is %f.\n\n", average);

    printf("%s", "Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);
  }

  printf("The overall average miles/gallon was %f\n", tMiles / tGallons);
}