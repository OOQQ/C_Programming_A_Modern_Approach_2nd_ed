/*
C Programming: A modern approach 2ed.
008 | Pag 034 | Chapter 2 | Programming Project 004 | 008_prgPrjct004.c
by: OOQQ
=======================================
TASK: Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added.
*/

#include <stdio.h>

int main(void)
{
  float value, percentage;
  
  printf("Enter an amount:");
  scanf("%f", &value);

  percentage = (value * 5.0f) / 100.0f;

  printf("With tax added: $%.2f", value + percentage);

  return 0;
}
