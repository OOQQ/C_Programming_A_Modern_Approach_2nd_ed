/*
C Programming: A modern approach 2ed.
031 | Pag 096 | Chapter 5 | Programming Project 002 | 031_prgPrjct002.c
by: OOQQ
=======================================
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:
*/

#include <stdio.h>

int main ( void )
{
  int hours, minutes;

  printf ( "Enter a 24-hour time:" );
  scanf ( "%d:%d", &hours, &minutes );

  if ( hours <= 12 ) {
  printf ( "Equivalent 12-hour time %.2d:%.2d AM", hours, minutes );
  } else {
  hours -= 12;
  printf ( "Equivalent 12-hour time %.2d:%.2d PM", hours, minutes );
  }

return 0;
}
