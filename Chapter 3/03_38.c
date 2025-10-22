// (Counting 7s) Write a program that reads an integer (5 digits or fewer) and de-
// termines and prints how many digits in the integer are 7s.

#include <stdio.h>

int main(void) {
  int number = 0;
  int sevens = 0;

  printf("Enter a number (5 digits or fewer): ");
  scanf("%d", &number);

  int a = number / 10000;
  int b = (number / 1000) % 10 ;
  int c = (number / 100) % 10 ;
  int d = (number / 10) % 10;
  int e = number % 10;

  printf("Your number is: %d\t%d\t%d\t%d\t%d\n", a, b, c, d, e);

  if (a == 7) {
    ++sevens;
  }

  if (b == 7) {
    ++sevens;
  }

  if (c == 7) {
    ++sevens;
  }

  if (d == 7) {
    ++sevens;
  }

  if (e == 7) {
    ++sevens;
  }

  printf("Your number has %d sevens.\n", sevens);

}