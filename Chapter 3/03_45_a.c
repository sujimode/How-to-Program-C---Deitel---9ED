// (Factorial) The factorial of a non-negative integer n is written n! (pronounced
// “n factorial”) and is defined as follows:) Check the book for reference.

#include <stdio.h>

int main(void) {
  int x = 0;
  int total = 1;

  printf("Enter an integer number: ");
  scanf("%d", &x);

  while (x >= 1) {
    total = total * x;
    printf("(%d)" , x);
    --x;
  }
  
  puts("");
  printf("Your result is: %d\n", total);
}