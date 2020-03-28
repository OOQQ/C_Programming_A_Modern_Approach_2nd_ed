/*
C Programming: A modern approach 2ed.
052 | Pag 123 | Chapter 6 | Programming Project 006 | 052_prgPrjct006.c
by: OOQQ
=======================================
Write a program that prompts the user to enter a number n, then prints all even squares between 1 and n.
*/

#include <stdio.h>

int main ( void )
{
  int input, squared, buffer;

  printf ( "Enter any number:" );
  scanf ( "%d", &input );
  printf ( "\n" );

  for ( squared = 2; buffer < input; squared++ ) {
    if ( squared % 2 == 0 ) {
      buffer = squared * squared;
      printf( "%d\n", buffer );
    } else {
      continue;
    }
  }

return 0;
}
