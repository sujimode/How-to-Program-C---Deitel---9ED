// Find the largest number: Finding the largest number is used frequently in computer aplications.
// For example, a program that determines the winner of a sales contest would input the numbner of units
// sold by each salesperson. The salesperson who sells them most units wins the contest.
// Write a pseudocode program and then a program that uses scanf to input a series of 
// 10- non-negative numbers and determines and prints the largest of the numbers. Your
// program should use three variables:
//    a) counter: A counter to count to 10, to keep track of how many numbers have 
//       been input and to determine when all 10 numbers have been processed.
//    b) number: The current number input to the program.
//    c) largest: The largest number found so far.

#include <stdio.h>

int main(void) {
  int counter = 1;
  int number = 0;
  int largest = 0;

  
  while (counter <= 10) {
    printf("%s", "Enter a number: ");
    scanf("%d", &number);

    if (number > largest) {
      largest = number;
    }
    
    ++counter;
  }

  printf("\nThe largest number: %d\n", largest);
}