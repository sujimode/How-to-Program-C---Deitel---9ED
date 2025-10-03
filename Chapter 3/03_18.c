// Sales Comission Calculator: One large chemical company pays its salespeople
// on a commission basis. The salespeople receive $200 per week plus 9% of their
// gross sales for that week. For example, a salesperson who sells $5000 worth of chemicals
// in a week receives $200 plus 9% of $5000, or a total of $650. Develop a program
// that will use scanf to input each salesperson's gross sales for last week and calculate
// and display that salesperson's earnings. Process one salesperson's figures at a time.

#include <stdio.h>

int main(void) {
  float grossSales = 0;
  float weeksEarnings = 0; 

  printf("%s", "Enter sales in dollars (-1 to end): ");
  scanf("%f", &grossSales);

  while (grossSales != -1) {
    weeksEarnings = (200 + (grossSales * 0.09));

    printf("Salary is %.2f\n\n", weeksEarnings);

    printf("%s", "Enter sales in dollars (-1 to end): ");
    scanf("%f", &grossSales);
  }
}