/*
C Programming: A modern approach 2ed.
009 | Pag 034 | Chapter 2 | Programming Project 005 | 009_prgPrjct005.c
by: OOQQ
=======================================
TASK: Write a program that asks the user to enter a value for x and then displays the value of the following polynomial: 3x⁵+2x⁴-5x³-x²+7x-6.
*/

#include <stdio.h>

int main(void)
{
  int value;
  long unsigned result;
  
  printf("Enter x value:");
  scanf("%d", &value);

/*
f(4) 3x⁵+2x⁴-5x³-x²+7x-6 = 3270
*/
  result = ((value * value * value * value * value) * 3) + ((value * value * value * value) * 2) - ((value * value * value) * 5) - (value * value) + (7 * value) - 6;

  printf("f(%d) 3x^5+2x^4-5x^3-x^2+7x-6 = %d", value, result);

  return 0;
}
