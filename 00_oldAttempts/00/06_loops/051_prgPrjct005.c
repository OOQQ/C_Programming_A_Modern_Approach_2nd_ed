/*
C Programming: A modern approach 2ed.
051 | Pag 123 | Chapter 6 | Programming Project 005 | 051_prgPrjct005.c
by: OOQQ
=======================================
Programming Project 001 in Chapter 4 asked you to write a program that displays a two-digit number with its digits reversed. Generalize the program so that the number can have one, two, three or more digits.
*/

#include <stdio.h>

int main ( void )
{
  unsigned int num, digit, result;

  printf ( "Enter a number up to 2,147,483,647:" );
  scanf ( "%d", &num );

  printf ( "Rever: " );
  for ( result = 1; result > 0; ) {
    digit = num % 10;
    result = num / 10;
    num = result;
    printf( "%d", digit );
  }
  
  printf( "\n" );

return 0;
}
