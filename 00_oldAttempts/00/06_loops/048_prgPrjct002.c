/*
C Programming: A modern approach 2ed.
048 | Pag 122 | Chapter 6 | Programming Project 002 | 048_prgPrjct002.c
by: OOQQ
=======================================
Write a program that asks the user to enter two integers, then calculates and displays their greatest common divisor (GCD).
*/

#include <stdio.h>

int main ( void )
{
  int numerM, denomN, buffer;

  printf ( "Enter two integers:" );
  scanf ( "%d %d", &numerM, &denomN );

  while ( denomN != 0 )
    buffer = numerM % denomN ;
    numerM = denomN;
    denomN = buffer;
  }

  printf ( "Greatest common divisor is: %d", numerM );

return 0;
}
