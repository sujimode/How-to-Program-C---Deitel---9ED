// Tabular Output: Write a program that uses looping to print the following ta-
// ble of values. Use the tab escape sequence, \t, in the printf statement to separate the
// columns with tabs.

#include <stdio.h>

int main(void) {
  int n = 1;
  
  printf("%s", "N\tN*10\tN*100\tN*1000\n\n");

  while (n <= 10) {
    printf("%d\t%d\t%d\t%d\n", n, n * 10, n * 100, n * 1000);
    ++n;
  }
}