// (Dangling-Else Problem) Determine the output for each of the following when
// x is 9 and y is 11, and when x is 11 and y is 9. The compiler ignores the indentation
// in a C program. Also, the compiler always associates an else with the previous if un-
// less told to do otherwise by the placement of braces {}. On first glance, you may not
// be sure which if an else matches, so this is referred to as the “dangling-else” prob-
// lem. We eliminated the indentation from the following code to make the problem
// more challenging. [Hint: Apply indentation conventions you have learned.]

#include <stdio.h>

int main(void) {
  int x = 11;
  int y = 9;

  if (x < 10)
    if (y > 10)
      puts("*****");
    else
      puts("#####");
    puts("$$$$$");

  if (x < 10) {
    if (y > 10)
      puts("*****");
  }

  else {
    puts("#####");
    puts("$$$$$");
  }
}