/*
C Programming: A modern approach 2ed.
023 | Pag 071 | Chapter 4 | Programming Project 002 | 023_prgPrjct002.c
by: OOQQ
=======================================
Extend the program in Programming Project 1 to handle three-digit numbers.
*/

#include <stdio.h>

int main(void)
{
  int num, units, dozens, cents;
  printf("Enter a three-digit number:");
  scanf("%d", &num);

  units = (num % 10);
  dozens = ((num / 10) % 10);
  cents = (num / 100);

  printf("The reversal is: %d%d%d", units, dozens, cents);

  return 0;
}
