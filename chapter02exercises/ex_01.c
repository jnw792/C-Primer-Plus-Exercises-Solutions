/* 
   Programming exercise 2-1
   Write a program that uses one printf() call to print your first name 
   and last mane on one line, uses a second printf() call to print your 
   first and last names on two seperate lines, and uses a pair of printf()
   calls to print your first and last names on one line. The output should 
   look like this(but using your name):
   Gustav Mahler <- First print statement
   Gustav        <- Second print statement
   Mahler        <- Still the second print statement 
   Gustav Mahler <- Third and fourth print statement
*/

#include <stdio.h>

int main(){

  printf("Love Snowball \n");
  printf("Love \n");
  printf("Snowball \n");
  printf("Love");
  printf(" Snowball \n");

  return 0;
}
