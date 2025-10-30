// What’s wrong with the following statement? Rewrite it to accomplish what the
// programmer was probably trying to do.
// printf("%d", ++(x + y));


#include <stdio.h>

int main(void) {
  // The programmer might had try to do two things:
  // 1. x + y and after adding, ++z
  // 2. ++x + ++y

  // 1.
  int x = 0;
  int y = 0;

  scanf("%d", &x);
  scanf("%d", &y);
  int z = x + y;
  ++z;
  printf("First situation: %d\n", z);

  // 2.
  z = 0;
  ++x;
  ++y;
  z = x + y;
  printf("Second situation: %d\n", z);
}