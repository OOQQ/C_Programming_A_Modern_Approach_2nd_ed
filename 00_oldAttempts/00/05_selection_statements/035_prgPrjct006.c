/*
C Programming: A modern approach 2ed.
035 | Pag 096 | Chapter 5 | Programming Project 006 | 035_prgPrjct006.c
by: OOQQ
=======================================
Modify the upc.c program of section 4.1 so that it checks whether a UPC is valid. After the user enters a UPC, the program will display either VALID or INVALID.
*/

#include <stdio.h>

int main ( void )
{
  int a, b, c, d, e, f, g, h, i, j, k, l, control;

  printf ( "Enter the the UPC number to check:" );
  scanf ( "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l );

  control = ((((((( a + c + e + g + i + k ) * 3 ) + ( b + d + f + h + j )) - 1 ) % 10 ) - 9 ) * -1 );
/*
"subtract the remainder from 9" is the same as subtract 9 from the remainder and change its sign.
*/

  if ( control == l ) {
  printf ( "VALID" );
  } else {
  printf ( "INVALID" );
  }

return 0;
}
