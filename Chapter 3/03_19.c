// Interest Calculator: The simple interest on a loan is calculated by the formula
// interest = principal * rate * days / 365;
// The preceding formulla assumes that rate is the annual interest rate, so it divides by
// 365 (days per year). Develop a program that uses scanf to input principal, rate
// and days for several loans, and will calculate and display the simple interest for each loan, using the precending formula.

#include <stdio.h>

int main(void) {
  float principal = 0;
  float rate = 0;
  int days = 0;
  float interest = 0;
  
  printf("%s", "Enter loan principal (-1 to end): ");
  scanf("%f", &principal);
  
  while (principal != -1) {
    printf("%s", "Enter interest rate: ");
    scanf("%f", &rate);
    
    printf("%s", "Enter term of the loan in days: ");
    scanf("%d", &days);
    
    interest = ((principal * rate * days) / 365);

    printf("The interest charge is $%.2f\n\n", interest);

    printf("%s", "Enter loan principal (-1 to end): ");
    scanf("%f", &principal);
  }
}