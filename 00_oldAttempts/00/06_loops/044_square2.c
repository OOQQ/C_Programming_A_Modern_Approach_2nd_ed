/*
C Programming: A modern approach 2ed.
044 | Pag 110 | Chapter 6 | Printing a table of squares (revisited) | square2.c
by: OOQQ
=======================================
The square.c program (section 6.1) can be improved by converting its while loop to a for loop.
*/

#include <stdio.h>

int main ( void )
{
  int num, i;

  printf ( "This program prints a table of squares.\n" );
  printf ( "Number of entries in table:" );
  scanf ( "%d", &num );

  for ( i = 1; i <= num; i++ ) {
    printf ( "%10d%10d\n", i, i * i );
  }

return 0;
}
