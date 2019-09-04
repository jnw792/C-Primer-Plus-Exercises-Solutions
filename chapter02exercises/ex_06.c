/*
 Programming exercise 2-6
 Write a program that creates an integer variable called toes. Have the program set toes
   to 10. Also have the program calculate what twice toes is and what toes squared is. The 
   program should print all three values, identifying them. 

*/

#include <stdio.h>

int main(void) {

  int toes;
  toes = 10;
  
  printf("Toes is %d.\n", toes);
  printf("Twice toes is %d.\n", 2 * toes);
  printf("Toes Squared is %d.\n", toes * toes);
  return 0; 

}

// or create two more variables, set then to 2 * toes and toes * toes 
