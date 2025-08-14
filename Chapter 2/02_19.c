// (Arithmetic, Largest Value and Smallest Value) Write a program that inputs
// three different integers from the keyboard, then displays the sum, the average, the
// product, the smallest and the largest of these numbers. Use only the single-selection
// form of the if statement you learned in this chapter.

#include <stdio.h>

int main(void) {
  int number1 = 0;
  int number2 = 0;
  int number3 = 0;

  puts("Enter three different integers: ");
  scanf("%d %d %d", &number1, &number2, &number3);

  int sum = number1 + number2 + number3;
  int average = sum / 3;
  int product = number1 * number2 * number3;

  printf("The sum is %d\n", sum);
  printf("The average is %d\n", average);
  printf("The product is %d\n", product);

  // CALCULATING THE LARGEST
  if (number1 > number2) {
    if (number1 > number3) {
      printf("The largest is %d\n", number1);
    }
  }

  if (number2 > number3) {
    if (number2 > number1) {
      printf("The largest is %d\n", number2);
    }
  }

  if (number3 > number1) {
    if (number3 > number2) {
      printf("The largest is %d\n", number3);
    }
  }

  // CALCULATING THE SMALLEST
  if (number1 < number2) {
    if (number1 < number3) {
      printf("The smallest is %d\n", number1);
    }
  }

  if (number2 < number3) {
    if (number2 < number1) {
      printf("The smallest is %d\n", number2);
    }
  }

  if (number3 < number1) {
    if (number3 < number2) {
      printf("The smallest is %d\n", number3);
    }
  }
}