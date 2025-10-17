// (Another Dangling-Else Problem) Modify the following code to produce the
// output shown. Use proper indentation techniques. You may not make any changes
// other than inserting braces. The compiler ignores the indentation in a program. We
// eliminated the indentation from the following code to make the problem more challenging.

#include <stdio.h>

int main(void) {
  int x = 5;
  int y = 7;

  if (y == 8) {
    if (x == 5)
    puts("@@@@@");
  }

    else {
      puts("#####");
      puts("$$$$$");
      puts("&&&&&");
    }
}