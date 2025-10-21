// (Palindrome Tester) A palindrome is a number or a text phrase that reads the
// same backward as forward. For example, each of the following five-digit integers is a
// palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a five-
// digit integer and determines whether or not it’s a palindrome. [Hint: Use the division
// and remainder operators to separate the number into its individual digits.]

#include <stdio.h>

int main(void) {
  int number = 0;

  printf("Enter a five digit number: ");
  scanf("%d", &number);

  int a = number / 10000;
  int b = (number / 1000) % 10 ;
  int c = (number / 100) % 10 ;
  int d = (number / 10) % 10;
  int e = number % 10;

  printf("Your number is: %d\t%d\t%d\t%d\t%d\n", a, b, c, d, e);

  if (a == e && b == d) {
    puts("This number is a palindrome.");
  }

  else { 
    puts("This numbes is not a palindrome.");
  }

}