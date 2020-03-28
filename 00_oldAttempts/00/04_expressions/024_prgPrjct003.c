/*
C Programming: A modern approach 2ed.
024 | Pag 071 | Chapter 4 | Programming Project 003 | 024_prgPrjct003.c
by: OOQQ
=======================================
Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number without using arithmetic to split the number into digits.
*/

#include <stdio.h>

int main(void)
{
  int num1, num2, num3;
  printf("Enter a three-digit number:");
  scanf("%1d%1d%1d", &num1, &num2, &num3);

  printf("The reversal is: %d%d%d", num3, num2, num1);

  return 0;
}
