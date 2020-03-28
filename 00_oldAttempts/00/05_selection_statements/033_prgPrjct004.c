/*
C Programming: A modern approach 2ed.
033 | Pag 096 | Chapter 5 | Programming Project 004 | 033_prgPrjct004.c
by: OOQQ
=======================================
Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding description.

Speed	Description

< 1	Calm
1-3	Light Air
4-27	Breeze
28-47	Gale
48-63	Storm
+63	Hurricane
*/

#include <stdio.h>

int main ( void )
{
  int speed;

  printf ( "Enter the current speed of wind (knots):" );
  scanf ( "%d", &speed );

  printf ( "According to Beaufort scale, the wind speed is ");

  if ( speed < 1 ) {
  printf ( " Calm.\n" );
  } else if ( speed >= 1 && speed <= 3 ) {
  printf ( " Light Air.\n" );
  } else if ( speed >= 4 && speed <= 27 ) {
  printf ( " Breeze.\n" );
  } else if ( speed >= 28 && speed <= 47 ) {
  printf ( " Gale.\n" );
  } else if ( speed >= 48 && speed <= 63 ) {
  printf ( " Storm.\n" );
  } else {
  printf ( " Hurricane.\n" );
  }

return 0;
}
