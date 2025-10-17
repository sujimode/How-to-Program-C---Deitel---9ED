// (Validating User Input) Modify the program in Figure 3.6 to validate its in-
// puts. For each input, if the value is other than 1 or 2, keep looping until the user en-
// ters a correct value.

// fig03_06.c
// Analysis of examination results.
#include <stdio.h>

// function main begins program execution
int main(void) {
  int passes = 0;
  int failures = 0;
  int student = 1;

  // process 10 students using counter-controlled loop
  while (student <= 10) {
    // prompt user for input and obtain value from user
    printf("%s", "Enter result (1 = pass, 2 = fail): ");
    int result = 0; // one exam result
    scanf("%d", &result);

    // if result 1, increment passes
    if (result == 1) {
      passes = passes + 1;
      student = student + 1; // increment student counter
    } // end if

    if (result == 2) { // otherwise, increment failures
      failures = failures + 1;
      student = student + 1; // increment student counter
    } // end else

  } // end while

  // termination phase; display number of passes and failures
  printf("Passes %d\n", passes);
  printf("Failed %d\n", failures);

  // ifo more than eight students passed, print "Bonus to instructor!"
  if (passes > 8) {
    puts("Bonus to instructor!");
  } // end if
} // end functionmain