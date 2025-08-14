// (Multiples) Write a program that reads two integers and determines and dis-
// plays whether the first is a multiple of the second. Use the remainder operator.

#include <stdio.h>

int main(void) {
  puts("Enter two integers: ");

  int number1 = 0;
  int number2 = 0;
  scanf("%d %d", &number1, &number2);

  if (number1 % number2 == 0) {
    printf("%d is multiple of %d.\n", number1, number2);
  }

  if (number1 % number2 != 0) {
    printf("%d is not multiple of %d.\n", number1, number2);
  }
}