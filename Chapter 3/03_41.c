// (Diameter, Circumference and Area of a Circle) Write a program that reads the
// radius of a circle (as a double value) and computes and prints the diameter, the cir-
// cumference and the area. Use the value 3.14159 for π.

#include <stdio.h>

int main (void) {
  double pi = 3.14159;
  double circleRadius = 0;

  printf("Enter the radius of a circle: ");
  scanf("%lf", &circleRadius);

  double circleDiameter = 2 * circleRadius;
  double circleCircumference = 2 * pi * circleRadius;
  double circleArea = pi * circleRadius * circleRadius;

  printf("The values are: \n");
  printf("\tDiameter: %.2lf\n", circleDiameter);
  printf("\tCircumference: %.2lf\n", circleCircumference);
  printf("\tArea: %.2lf\n", circleArea);
}