// (Find the Two Largest Numbers) Using an approach similar 
// to Exercise 3.23,
// find the two largest values of the 10 numbers. 
// You may input each number only once.

#include <stdio.h>

int main(void) {
  int counter = 1;
  int number = 0;
  int largest = 0;
  int secondLargest = 0;

  
  while (counter <= 10) {
    printf("%s", "Enter a number: ");
    scanf("%d", &number);

    if (number > largest) {
      secondLargest = largest;
      largest = number;
    }

    if (number < largest) {
      if (number > secondLargest) {
        secondLargest = number;
      }
    }
    
    ++counter;
  }

  printf("\nThe largest number: %d\n", largest);
  printf("\nThe second largest number: %d\n", secondLargest);
}