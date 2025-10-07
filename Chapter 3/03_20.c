// Salary Calculator: Develop a program that will determine the gross pay for
// each of several employees. The company pays "straight time" for the first 40 hours
// worked by each employee and pays "time and a half" for all hours worked in excess
// of 40 hours. You're given a list of the company's employees, the number of hours each
// worked last week and each employee's hourly rate. Your program should use scanf
// to input this information for each employee and determine and display the employee's
// gross pay.

#include <stdio.h>

int main(void) {
  int numberOfHours = 0;
  float hourlyRate = 0;
  float salary = 0;

  printf("Enter number of hours worked (-1 to end): ");
  scanf("%d", &numberOfHours);

  while (numberOfHours != -1) {
    printf("Enter hourly rate of the worker($00.00): ");
    scanf("%f", &hourlyRate);

    if (numberOfHours > 40) {
      salary = (hourlyRate * 40) + ((numberOfHours - 40) * (hourlyRate * 1.5));

      printf("Salary is %.2f\n\n", salary);
    }

    if (numberOfHours <= 40) {
      salary = hourlyRate * numberOfHours;

      printf("Salary is %.2f\n\n", salary);
    }

    printf("Enter number of hours worked (-1 to end): ");
    scanf("%d", &numberOfHours);
  }
}