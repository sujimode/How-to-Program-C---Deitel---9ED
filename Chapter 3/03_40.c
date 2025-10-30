// (Multiples of 2 with an Infinite Loop) Write a program that keeps printing the
// multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should
// not terminate (i.e., you should create an infinite loop). What happens when you run
// this program? 
// 
// It collapse due to a max number of digits.

#include <stdio.h>

int main(void) {
  int number = 2;

  while (number > 0) {
    printf("%d\n", number);
    number = number * 2;
  }
}