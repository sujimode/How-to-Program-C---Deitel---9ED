// (Sides of a Triangle) Write a program that reads three nonzero integer values
// and determines and prints whether they could represent the sides of a triangle.

#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  int c = 0;

  printf("Enter three integer number\nas sides of your triangle: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a + b > c && b + c > a && c + a > b) {
    puts("This can be a triangle.");
  }

  else {
    puts("This cannot form a tringle.");
  }
}