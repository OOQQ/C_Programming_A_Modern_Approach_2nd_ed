/*
C Programming: A modern approach 2ed.
040 | Pag 097 | Chapter 5 | Programming Project 011 | 040_prgPrjct011.c
by: OOQQ
=======================================
Write a program that asks the user for a two-digit number, then prints the English word for the number.
*/

#include <stdio.h>

int main ( void )
{
  int num, tens, units;

  printf ( "Enter a two-digit number:" );
  scanf ( "%d", &num );

  tens = num / 10;
  units = num % 10;

  printf ( "You entered the number " );

  if ( num == 11 ) {
    tens = 0;
    units = 0;
    printf ( "eleven." );
  } else if ( num == 12 ) {
    tens = 0;
    units = 0;
    printf ( "twelve." );
  } else if ( num == 13 ) {
    tens = 0;
    units = 0;
    printf ( "thirteen." );
  } else if ( num == 14 ) {
    tens = 0;
    units = 0;
    printf ( "fourteen." );
  } else if ( num == 15 ) {
    tens = 0;
    units = 0;
    printf ( "fifteen." );
  } else if ( num == 16 ) {
    tens = 0;
    units = 0;
    printf ( "sixteen." );
  } else if ( num == 17 ) {
    tens = 0;
    units = 0;
    printf ( "seventeen." );
  } else if ( num == 18 ) {
    tens = 0;
    units = 0;
    printf ( "eighteen." );
  } else if ( num == 19 ) {
    tens = 0;
    units = 0;
    printf ( "nineteen." );
  }

  switch ( tens ) {
    case 1 : printf ( "ten" );		break;
    case 2 : printf ( "twenty" );	break;
    case 3 : printf ( "thirthy" );	break;
    case 4 : printf ( "forty" );	break;
    case 5 : printf ( "fifty" );	break;
    case 6 : printf ( "sixty" );	break;
    case 7 : printf ( "seventy" );	break;
    case 8 : printf ( "eighty" );	break;
    case 9 : printf ( "ninety" );	break;
  }

  switch ( units ) {
    case 1 : printf ( "-one.\n" );	break;
    case 2 : printf ( "-two.\n" );	break;
    case 3 : printf ( "-three.\n" );	break;
    case 4 : printf ( "-four.\n" );	break;
    case 5 : printf ( "-five.\n" );	break;
    case 6 : printf ( "-six.\n" );	break;
    case 7 : printf ( "-seven.\n" );	break;
    case 8 : printf ( "-eight.\n" );	break;
    case 9 : printf ( "-nine.\n" );	break;
  }

return 0;
}
