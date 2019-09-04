/* 
   Programming exercise 2-3
   Write a program that converts your age in years to days and display both 
   values. At this point, don't worry about fractional years and leap years.
*/

#include <stdio.h>

int main(void) {

  int ageyears; /* age in years */
  int agedays;  /* age in days  */
                /* larger ages may require the long type */

  ageyears = 25;
  agedays = 365 * ageyears;
  printf("An age of %d years is %d days.\n", ageyears, agedays);

  return 0;

}
