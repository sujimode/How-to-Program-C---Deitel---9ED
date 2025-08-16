// (Sort in Ascending Order) Write a program that inputs three different numbers
// from the user. Display the numbers in increasing order. Recall that an if statement’s
// body can contain more than one statement. Prove that your script works by running
// it on all six possible orderings of the numbers. Does your script work with duplicate
// numbers? [This is challenging. In later chapters you’ll do this more conveniently and
// with many more numbers.]

#include <stdio.h>

int main(void) {
  puts("Enter three different numbers: ");

  int x = 0;
  int y = 0;
  int z = 0;

  scanf("%d %d %d", &x, &y, &z);

  if (x > y) {
    if (y > z) {
      printf("%d %d %d\n", z, y, x);
    }
  }

  if (x > z) {
    if (z > y) {
      printf("%d %d %d\n", y, z, x);
    }
  }

  if (y > z) {
    if (z > x) {
      printf("%d %d %d\n", x, z, y);
    }
  }

  if (y > x) {
    if (x > z) {
      printf("%d %d %d\n", z, x, y);
    }
  }

  if (z > x) {
    if (x > y) {
      printf("%d %d %d\n", y, x, z);
    }
  }

  if (z > y) {
    if (y > x) {
      printf("%d %d %d\n", x, y, z);
    }
  }

  if (x == y) {
    if (y > z) {
      printf("%d %d %d\n", z, y, x);
    }

    if (y < z) {
      printf("%d %d %d\n", x, y, z);
    }
  }

  if (y == z) {
    if (z > x) {
      printf("%d %d %d\n", x, z, y);
    }

    if (z < x) {
      printf("%d %d %d\n", y, z, x);
    }
  }

  if (z == x) {
    if (x > y) {
      printf("%d %d %d\n", y, x, z);
    }

    if (x < y) {
      printf("%d %d %d\n", z, x, y);
    }
  }

  if (x == y) {
    if (y == z) { 
      printf("%d %d %d\n", x, y, z);
    }
  }
}