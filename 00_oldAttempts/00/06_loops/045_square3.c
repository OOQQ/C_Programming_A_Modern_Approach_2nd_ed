/*
C Programming: A modern approach 2ed.
045 | Pag 110 | Chapter 6 | Printing a table of squares (revisited again) | square3.c
by: OOQQ
=======================================
The square.c program (section 6.1) can be rewritten using an odd method.
*/

#include <stdio.h>

int main ( void )
{
  int i, n, odd, square;

  printf ( "This program prints a table of squares.\n" );
  printf ( "Number of entries in table:" );
  scanf ( "%d", &n );

  i = 1;
  odd = 3;

  for ( square = 1; i <= n; odd += 2 ) {
    printf ( "%10d%10d\n", i, square );
    i++;
    square += odd;
  }

return 0;
}
