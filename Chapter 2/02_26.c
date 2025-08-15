// (Separating Digits in an Integer) Write a program that inputs one five-digit
// number, separates the number into its individual digits and displays the digits sepa-
// rated from one another by three spaces each. [Hint: Use combinations of integer di-
// vision and the remainder operation.]

#include <stdio.h>

int main(void) {
  puts("Enter a five-digit number: ");

  int number = 0;
  scanf("%d", &number);

  printf("%d   ", number / 10000);
  printf("%d   ", number / 1000 % 10);
  printf("%d   ", number / 100 % 10);
  printf("%d   ", number / 10 % 10);
  printf("%d\n", number % 10);
}