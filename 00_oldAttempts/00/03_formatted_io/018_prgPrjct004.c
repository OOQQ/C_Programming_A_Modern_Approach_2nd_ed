/*
C Programming: A modern approach 2ed.
018 | Pag 050 | Chapter 3 | Programming Project 004 | 018_prgPrjct004.c
by: OOQQ
=======================================
Write a program that prompts the user to enter a telephone number in the form (xxx)xxx-xxxx and then displays the number in the form xxx.xxx.xxx.
*/

#include <stdio.h>

int main(void)
{
  int x, y, z;

  printf("Enter phone number [(xxx) xxx-xxxx]:");
  scanf("(%d", &x);
  scanf(") %d", &y);
  scanf("-%d", &z);

  printf("You entered: %d.%d.%d ", x, y, z);

  return 0;
}
