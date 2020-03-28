/*
C Programming: A modern approach 2ed.
043 | Pag 105 | Chapter 6 | Calculating the number of digits in an integer | numdigits.c
by: OOQQ
=======================================
Let's write a program that sums a series of integers entered by the user.
*/

#include <stdio.h>

int main ( void )
{
  int num, buffer, result;

  printf ( "Enter a positive integer:" );
  scanf ( "%d", &num );

  buffer = num;

  do {
    num /= 10;
    result++;
  } while ( num != 0 );

  printf ( "The number %d has %d digit(s)\n.", buffer, result );

return 0;
}
