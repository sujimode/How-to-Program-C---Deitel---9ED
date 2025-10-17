// Tabular output: Write a program that utilizes looping to 
// produce the following table of values.

#include <stdio.h>

int main(void) {
  int a = 3;

  printf("%s", "A\tA+2\tA+4\tA+6\n\n");

  while (a <= 15) {
    printf("%d\t%d\t%d\t%d\n", a, a + 2, a + 4, a + 6);
    a += 3;
  }
}