/*
C Programming: A modern approach 2ed.
022 | Pag 071 | Chapter 4 | Programming Project 001 | 022_prgPrjct001.c
by: OOQQ
=======================================
Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed.
*/

#include <stdio.h>

int main(void)
{
  int num, units, dozens;
  printf("Enter a two-digit number:");
  scanf("%d", &num);

  units = (num % 10);
  dozens = (num / 10);

  printf("The reversal is: %d%d", units, dozens);

  return 0;
}
