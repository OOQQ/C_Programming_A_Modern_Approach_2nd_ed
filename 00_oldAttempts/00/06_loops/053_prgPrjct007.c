/*
C Programming: A modern approach 2ed.
053 | Pag 123 | Chapter 6 | Programming Project 007 | 053_prgPrjct007.c
by: OOQQ
=======================================
Rearrange the square3.c program so that the for loop initializes i, tests i, and increments i, Don't rewrite the program; in particular, don't use any multiplications.
*/

#include <stdio.h>

int main ( void ) {

  int i, input, buffer, z;

  printf ( "This program prints a table of squares.\n" );
  printf ( "Number of entries in table:" );
  scanf ( "%d", &input );

  printf ( "%10d", 1 );  printf ( "%10d\n", 1 );

  for ( i = 2; i <= input; i++ ) {
    z = 0;
    printf ( "%10d", i );

    for ( buffer = i; buffer > 0; buffer-- ) {
      z += i;
    }

  printf ( "%10d\n", z );
  }

return 0;
}
