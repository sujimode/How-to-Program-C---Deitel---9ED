// (Checkerboard Pattern of Asterisks) Write a program that displays the follow-
// ing checkerboard pattern:
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
// * * * * * * * *
//  * * * * * * * *
// Your program must use only three output statements, one of each of the following
// forms:
// printf("%s", "* ");
// printf("%s", " ");
// puts(""); // outputs a newline

#include <stdio.h>

int main(void) {
  int row = 1;

  while (row <= 8) {
    int asterisk = 1;

    while (asterisk <= 8) {
      if(row % 2 == 0 && asterisk == 1) {
        printf(" ");
      }

      printf("* ");
      ++asterisk;
    }
    puts("");
    ++row;
  }
}