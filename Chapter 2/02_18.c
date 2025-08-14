// (Comparing Integers) Write a program that reads two integers from the user
// then displays the larger number followed by the words “is larger.” If the numbers
// are equal, display the message “These numbers are equal.” Use only the single-selec-
// tion form of the if statement you learned in this chapter.

#include <stdio.h>

int main(void) {
  int number1 = 0;
  int number2 = 0;

  puts("Enter two integer numbers: ");
  scanf("%d %d", &number1, &number2);

  if (number1 > number2) {
    printf("%d is larger than %d\n", number1, number2);
  }

  if (number1 < number2) {
    printf("%d is larger than %d\n", number2, number1);
  }

  if (number1 == number2) {
    printf("%d is equal to %d\n", number1, number2);
  }
}