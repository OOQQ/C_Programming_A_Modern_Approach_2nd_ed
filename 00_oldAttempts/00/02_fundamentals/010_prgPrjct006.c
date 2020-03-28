/*
C Programming: A modern approach 2ed.
010 | Pag 034 | Chapter 2 | Programming Project 006 | 010_prgPrjct006.c
by: OOQQ
=======================================
TASK: Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula: ((((3x+2)x-5)x-1)x+7)x-6.
*/

#include <stdio.h>

int main(void)
{
  int value;
  int result;
  
  printf("Enter x value:");
  scanf("%d", &value);

/*
f(4) ((((3x+2)x-5)x-1)x+7)x-6 = 3270
*/
  result = ((((3 * value + 2) * value - 5) * value - 1) * value + 7) * value - 6;

  printf("f(%d) ((((3x+2)x-5)x-1)x+7)x-6 = %d", value, result);

  return 0;
}
