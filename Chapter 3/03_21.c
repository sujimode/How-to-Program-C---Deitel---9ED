// Predecrementing vs Postdecrementing: Write a program that demonstrates
// the difference between predecrementing and postdecrementing using the decrementing operator --.

#include <stdio.h>

int main(void) {
  int number = 0;

  printf("%s", "Enter a number: ");
  scanf("%d",&number);

  printf("\nFirst, we use: %d\n", number);
  printf("Second, use again before we add: %d\n", number++);
  printf("Then, we use after adding it: %d\n\n", number);

  printf("First, we use: %d\n", number);
  printf("Second, we add before we use again: %d\n", ++number);
  printf("Then, we use after adding it: %d\n", number);
}