/*
C Programming: A modern approach 2ed.
049 | Pag 123 | Chapter 6 | Programming Project 003 | 049_prgPrjct003.c
by: OOQQ
=======================================
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms.
*/

#include <stdio.h>

int main ( void )
{
  int numerM, denomN, bufferM, bufferN, buffer;

  printf ( "Enter a fraction:" );
  scanf ( "%d/%d", &numerM, &denomN );

  bufferM = numerM, denomN;
  bufferN = denomN;

  while ( denomN != 0 ) {
    buffer = numerM % denomN;
    numerM = denomN;
    denomN = buffer;
  }

  printf ( "Greatest common divisor is: %d/%d", (bufferM / numerM), (bufferN / numerM) );

return 0;
}
