/* 
   Programming exercise 2-4
   Write a program that produces the following output:
   For he's a jolly good fellow!
   For he's a jolly good fellow!
   For he's a jolly good fellow!
   Which nobody can deny!

   Have the program use two user-defined functions in addition to main():
   oen named jolly() that prints the "jolly good" message once, and one 
   named deny() that prints the final line once.
   
*/

#include <stdio.h>

void jolly(void);
void deny(void);
int main(void) {
  
  jolly();
  jolly();
  jolly();
  deny();
  return 0;
}

void jolly(void)
{

  printf("For he's a jelly good fellow! \n");
 
}

void deny(void)
{
  printf("Which nobody can deny! \n");
}