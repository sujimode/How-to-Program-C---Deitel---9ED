// (Square of Asterisks) Write a program that reads in the side of a square and then
// prints that square out of asterisks. Your program should work for squares of all side
// sizes between 1 and 20.

#include <stdio.h>

int main(void) {
  int number = 0;
  int row = 1;

  printf("Enter one side of your square: ");
  scanf("%d", &number);

  if (number >= 1) { // Makes the program only take positive numbers.
    if (number <= 20) { // Makes the program only take numbers bellow or equal 20.

      while (number >= row) {
        int columns = 1;

        while (columns <= number) {
          printf("*");
          ++columns;
        }
        puts("");
        ++row;
      }
    }
  }
}