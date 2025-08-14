// (Arithmetic) Write a program that reads two integers
// from the user then displays their sum, product,
// difference, quotient and reminder.

#include <stdio.h>

int main(void) {
  int integer1 = 0;
  int integer2 = 0;
  
  puts("Enter your two numbers: ");
  scanf("%d %d", &integer1, &integer2);
  
  int sum = integer1 + integer2;
  int product = integer1 * integer2;
  int difference = integer1 - integer2;
  int quotient = integer1 / integer2;
  int reminder = integer1 % integer2;
  
  printf("The sum is %d\n", sum);
  printf("The product is %d\n", product);
  printf("The difference is %d\n", difference);
  printf("The quotient is %d\n", quotient);
  printf("The reminder is %d\n", reminder);
}