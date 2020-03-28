/*
C Programming: A modern approach 2ed.
054 | Pag 123 | Chapter 6 | Programming Project 008 | 054_prgPrjct008.c
by: OOQQ
=======================================
Write a program that prints a one-month calendar. The user specifies the number of days in the month and the day of the week on which the month begins.
*/

#include <stdio.h>

int main ( void ) {

int days, week, i, buffer;

printf ( "Enter number of days in month:" );
scanf ( "%d", &days );

printf ( "Enter starting day of the week (1=Mon, 7=Sun):" );
scanf ( "%d", &week );

buffer = week;
printf ( "\n" );

for ( i = week; i > 1 ; i-- ) {
  printf ( "   " );
}

for ( i = 1; i <= days; i++ ) {
  printf ( "%3d", i );
    if ( buffer == 7 ) {
      printf ( "\n" );
      buffer = 1;
    } else {
     buffer++;
    }
}

printf ( "\n" );

return 0;
}
