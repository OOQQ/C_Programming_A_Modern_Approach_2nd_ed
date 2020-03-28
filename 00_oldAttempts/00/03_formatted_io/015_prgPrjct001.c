/*
C Programming: A modern approach 2ed.
015 | Pag 050 | Chapter 3 | Programming Project 001 | 015_prgPrjct001.c
by: OOQQ
=======================================
Write a program that accepts a date from the user in the form dd/mm/yyyy and then displays it in the form yyyymmdd.
*/

#include <stdio.h>

int main(void)
{
  int day, month, year;

  printf("Enter a date (dd/mm/yyyy) :");
  scanf("%d/%d/%d", &day, &month, &year);

/*
"minimum of 2 digits to display (%.2d)" added due edge cases that begin with 0's
*/
  printf("You entered the date: %.4d%.2d%.2d", year, month ,day);

  return 0;
}
