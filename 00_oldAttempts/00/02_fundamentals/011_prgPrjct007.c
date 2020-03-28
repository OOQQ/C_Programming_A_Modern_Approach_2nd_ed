/*
C Programming: A modern approach 2ed.
011 | Pag 034 | Chapter 2 | Programming Project 007 | 011_prgPrjct007.c
by: OOQQ
=======================================
TASK: Write a program that asks the user to enter a US dollar amount and then shows you how to pay that amount usign the smallest number of $20, $10, $5 and $1 bills.
*/

#include <stdio.h>

int main(void)
{
  int amount, twenties, twentiesResult, tens, tensResult, fives, fivesResult;
  
  printf("Enter a dollar amount:");
  scanf("%d", &amount);

  twentiesResult = amount / 20;
  printf("\n$20 bills: %d\n", twentiesResult);
  amount = amount - (twentiesResult * 20);

  tensResult = amount / 10;
  printf("$10 bills: %d\n", tensResult);
  amount = amount - (tensResult * 10);

  fivesResult = amount / 5;
  printf(" $5 bills: %d\n", fivesResult);
  amount = amount - (fivesResult * 5);

  printf(" $1 bills: %d\n", amount);

  return 0;
}
