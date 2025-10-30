// (Sides of a Right Triangle) Write a program that reads three nonzero integers
// and determines and prints whether they could be the sides of a right triangle.

#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  int c = 0;
  
  puts("Enter nonzero integer numbers:");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b && a > c) {
    int rside = c * c + b * b;
    int lside = a * a;
    printf((lside == rside) ? "This can form a triangle.\n" : "This can't be a triangle.\n"); 
  }
  
  if (b > c && b > a) {
    int rside = c * c + a * a;
    int lside = b * b;
    printf((lside == rside) ? "This can form a triangle.\n" : "This can't be a triangle.\n"); 
  }

  if (c > a && c > b) {
    int rside = a * a + b * b;
    int lside = c * c; 
    printf((lside == rside) ? "This can form a triangle.\n" : "This can't be a triangle.\n"); 
  }

}