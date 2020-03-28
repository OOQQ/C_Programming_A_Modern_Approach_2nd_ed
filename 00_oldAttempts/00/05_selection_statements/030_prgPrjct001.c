/*
C Programming: A modern approach 2ed.
030 | Pag 095 | Chapter 5 | Programming Project 001 | 030_prgPrjct001.c
by: OOQQ
=======================================
Write a program that calculates how many digits a number contains (Assuming max length of 4 digits).
*/

#include <stdio.h>

int main ( void )
{
  int number, result;

  printf ( "Enter a number between 1 and 9999:" );
  scanf ( "%d", &number );

  if ( number >= 1000 ) {
  result = 4;
  } else if ( number >= 100 ) {
  result = 3;
  } else if ( number >= 10 ) {
  result = 2;
  } else {
  result = 1;
  }

  printf ( "The number %d has %d digits", number, result );

return 0;
}
