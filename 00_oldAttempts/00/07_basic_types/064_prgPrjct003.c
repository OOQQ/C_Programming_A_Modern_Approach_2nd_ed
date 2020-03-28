/*
C Programming: A modern approach 2ed.
064 | Pag 157 | Chapter 7 | Programming Project 003 | 064_prgPrjct003.c
by: OOQQ
=======================================
Modify the sum2.c program of section 7.1 to sum a series of double values.
*/

#include <stdio.h>

int main ( void ) {

  double n, sum = 0;

  printf ( "This program sums a series of double values.\n" );
  printf ( "Enter doubles (0 to terminate): " );

  scanf( "%lf", &n );
  while ( n != 0 ) {
    sum += n;
    scanf ( "%lf", &n );
  }

  printf ( "The sum is: %f\n", sum );

return 0;
}
