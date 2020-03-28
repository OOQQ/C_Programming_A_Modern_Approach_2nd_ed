/*
C Programming: A modern approach 2ed.
060 | Pag 142 | Chapter 7 | Determines the length of a message ( using getchar() ) | length.c
by: OOQQ
=======================================
Determines the length of a message.
*/

#include <stdio.h>

int main ( void ) {

  char ch;
  int len = 0;

  printf ( "Enter a message:" );
  ch = getchar();
  while ( ch != '\n' ) {
    len++;
    ch = getchar();
  }

  printf ( "Your message was %d character(s) long.\n", len);

return 0;
}
