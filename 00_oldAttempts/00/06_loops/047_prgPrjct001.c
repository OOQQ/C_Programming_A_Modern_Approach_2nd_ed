/*
C Programming: A modern approach 2ed.
047 | Pag 122 | Chapter 6 | Programming Project 001 | 047_prgPrjct001.c
by: OOQQ
=======================================
Write a program that finds the largest in a series of numbers entered by the user. The program must prompt the user to enter numbers one by one. When the user enters 0 or a negative number, the program must display the largest non negative number entered.
*/

#include <stdio.h>

int main ( void )
{
  float num, buffer;

  printf ( "Enter a number:" );
  scanf ( "%f", &num );

  while ( num > 0 ) {
    if ( num >= buffer ) {
      buffer = num;
      printf ( "Enter a number:" );
      scanf ( "%f", &num );
    } else {
      continue;
    }
  }

  printf ( "\nThe largest number entered was %.2f", buffer );

return 0;
}
