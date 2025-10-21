// (Hollow Square of Asterisks) Modify the program you wrote in the preceding
// exercise so that it prints a hollow square.


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
          if (row > 1 && columns > 1 && row < number && columns < number) {
            printf(" ");
            ++columns;
          }

          else {
            printf("*");
            ++columns;
          }

        }
        puts("");
        ++row;
      }
    }
  }
}