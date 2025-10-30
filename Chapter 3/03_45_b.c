// (Factorial) The factorial of a non-negative integer n is written n! (pronounced
// “n factorial”) and is defined as follows:) Check the book for reference.

#include <stdio.h>

int main(void) {
  int x = 0;
  int y = 1;
  double e = 0;
  double n = 1;

  printf("Enter an integer number: ");
  scanf("%d", &x);

  while (y <= x) {
    n = n * y;
    e += (1 / n);
    // printf("(%.0lf)" , n); // For result check.
    // printf("(%.5lf)\n" , e); // For result check.
    ++y;
  }
  
  puts("");
  printf("Your result is: %.5lf\n", ++e);
}