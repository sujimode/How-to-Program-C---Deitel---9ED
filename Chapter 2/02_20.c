// (Circle Area, Diameter and Circumference) For a circle of radius 2, display the
// diameter, circumference and area. Use the value 3.14159 for π. Use the following for-
// mulas (r is the radius): diameter = 2r, circumference = 2πr and area = πr2. Perform each
// of these calculations inside the printf statement(s) and use the conversion specifica-
// tion %f. This chapter discussed only integer constants and variables. Chapter 3 will
// discuss floating-point numbers—that is, values that can have decimal points.

#include <stdio.h>

int main(void) {
  int radius = 2;

  printf("The area is of the circle is %f\n", 3.14159 * radius * radius);
  printf("The diameter is %d\n", 2 * radius);
  printf("The circumference is %f\n", 2 * 3.14159 * radius);
}