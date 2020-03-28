/*
 * C Programming: A modern approach 2ed.
 * 059 | Pag 131 | Chapter 7 | Summing a series of numbers (revisited) | sum2.c
 * by: OOQQ
 * Sums a series of numbers using ~long variables.
 */

#include <stdio.h>

int main ( void ) {

  long n, sum = 0;

  printf ( "This program sums a series of integers.\n" );
  printf ( "Enter integers (0 to terminate): " );

  scanf( "%ld", &n );
  while ( n != 0 ) {
    sum += n;
    scanf ( "%ld", &n );
  }

  printf ( "The sum is: %ld\n", sum );

return 0;
}
