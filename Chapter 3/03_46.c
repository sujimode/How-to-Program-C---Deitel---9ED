// (World Population Growth) World population has grown considerably over
// the centuries. Continued growth could eventually challenge the limits of breathable
// air, drinkable water, arable land and other limited resources. There’s evidence that
// growth has been slowing in recent years, and that world population could peak some
// time this century, then start to decline.
// For this exercise, research world population growth issues. This is a controversial
// topic, so be sure to investigate various viewpoints. Get estimates for the current
// world population and its growth rate. Write a program that calculates world popula-
// tion growth each year for the next 100 years, using the simplifying assumption that the
// current growth rate will stay constant. Print the results in a table. The first column
// should display the year from 1 to 100. The second column should display the antic-
// ipated world population at the end of that year. The third column should display the
// numerical increase in the world population that would occur that year. Using your
// results, determine the years in which the population would become double and
// eventually quadruple what it is today.

#include <stdio.h> 

int main(void) {
  long int years = 2025;
  long int initialWorldPopulation = 8231613070;
  long int anticipatedWorldPopulation = 8231613070;
  long int worldPopulationIncrease = 0;
  long int pastWorldPopulation = 0;

  puts("Years\t\tAnticipated W.P.\tIncrease in W.P.");

  while (years <= 2125) {
    long int finalWorldPopulation = anticipatedWorldPopulation;
    
    printf("%ld\t\t", years);
    printf("%ld\t\t", anticipatedWorldPopulation);
    printf("%ld", worldPopulationIncrease);

    if (anticipatedWorldPopulation > 16463226140 && anticipatedWorldPopulation < 17019438692) {
      printf("\t\tThis year is double the population.");
    }
    
    pastWorldPopulation = anticipatedWorldPopulation;
    anticipatedWorldPopulation += anticipatedWorldPopulation * 0.01;
    worldPopulationIncrease = anticipatedWorldPopulation - pastWorldPopulation;

    puts("");
    ++years;
  }
}