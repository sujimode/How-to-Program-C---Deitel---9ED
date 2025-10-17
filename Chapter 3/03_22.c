// Printing numbers from a loop: Write a program that utilizes looping to print
// the numbers from 1 to 10 side by side on the same line with three spaces between
// numbers.

#include <stdio.h>

int main(void) {
  int number = 1;

  while (number <= 10) {
    printf("%d   ", number++);
  }
  printf("%s", "\n");
}