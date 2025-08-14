// (Odd or Even) Write a program that reads an integer and determines and dis-
// plays whether it’s odd or even. Use the remainder operator. An even number is a mul-
// tiple of two. Any multiple of two leaves a remainder of zero when divided by 2.

#include <stdio.h>

int main(void) {
  puts("Enter an integer number: ");

  int number = 0;
  scanf("%d", &number);

  if (number % 2 == 0) { 
    printf("%d it's an even number.\n", number);
  }
  
  if (number % 2 != 0) {
    printf("%d it's an odd number.\n", number);
  }
}