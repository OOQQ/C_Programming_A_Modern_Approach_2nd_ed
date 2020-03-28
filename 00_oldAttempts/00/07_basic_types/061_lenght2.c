/*
C Programming: A modern approach 2ed.
061 | Pag 142 | Chapter 7 | Determines the length of a message ( using getchar() ) | length2.c
by: OOQQ
=======================================
Determines the length of a message.
*/

#include <stdio.h>

int main ( void )
{

  int len = 0;

  printf ( "Enter a message:" );
  while ( getchar() != '\n' ) {
    len++;
  printf ( "Your mesasage was %d character(s) long.\n", len );
  }

return 0;
}
