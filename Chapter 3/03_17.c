// (Credit-Limit Calculator) Develop a C program that will determine whether a
// department-store customer has exceeded the credit limit on a charge account. For
// each customer, the following facts are available:
//  a) Account number
//  b) Balance at the beginning of the month
//  c) Total of all items charged by this customer this month
//  d) Total of all credits applied to this customer's account this month
//  e) Allowed credit limit
// The program should use scanf to input each fact, calculate the new balance (=
// beginning balance + charges – credits), and determine whether the new balance exceeds
// the customer's credit limit. For those customers whose credit limit is exceeded, the
// program should display the customer's account number, credit limit, new balance
// and the message “Credit limit exceeded.”

#include <stdio.h>

int main(void) {
  int accountNumber = 0;
  float beginningBalance = 0;
  float totalCharges = 0;
  float totalCredits = 0;
  float creditLimit = 0;

  printf("%s", "Enter account number (-1 to end): ");
  scanf("%d", &accountNumber);

  while (accountNumber != -1) {
    printf("%s", "Enter beginning balance: ");
    scanf("%f", &beginningBalance);

    printf("%s", "Enter total charges: ");
    scanf("%f", &totalCharges);

    printf("%s", "Enter total credits: ");
    scanf("%f", &totalCredits);

    printf("%s", "Enter credit limit: ");
    scanf("%f", &creditLimit);

    double newBalance = beginningBalance + totalCharges - totalCredits;

    
    if (newBalance > creditLimit) {
      printf("Account:\t%d\n", accountNumber);
      printf("Credit limit:\t%.2f\n", creditLimit);
      printf("Balance:\t%.2f\n", newBalance);
      printf("Credit limit Exceeded.\n");
    }

    printf("%s", "\nEnter account number (-1 to end): ");
    scanf("%d", &accountNumber);
  }
}