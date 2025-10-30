// (Factorial) The factorial of a non-negative integer n is written n! (pronounced
// “n factorial”) and is defined as follows:) Check the book for reference.

#include <stdio.h>

int main(void) {
  double e = 0;
  double n = 1;
  int x = 0; // Input from the user.
  int y = 1; // Counter and control for factorial part.
  int z = 1; // Input from the user powered to input from the user.

  printf("Enter an integer number: ");
  scanf("%d", &x);

  while (y <= x) {
    n = n * y;
    z *= x;
    e += (z / n);
    printf("(%.5lf)" , e); // For result check.
    printf("(%d)", z); // For result check.
    printf("(%.0lf)\n" , n); // For result check.
    ++y;
  }
  
  puts("");
  printf("Your result is: %.5lf\n", ++e);
}