/*
C Programming: A modern approach 2ed.
041 | Pag 102 | Chapter 6 | Printing a table of squares | square.c
by: OOQQ
=======================================
Let's write a program that prints a table of squares. The program will first prompt the user to enter a number n. It will then print n lines of output, with each line containing a number between 1 and n together with its square.
*/

#include <stdio.h>

int main ( void )
{
  int num, squares, control;

  control = 1;
  squares = 1;

  printf ( "This program prints a table of squares.\n" );
  printf ( "Number of entries in table:" );
  scanf ( "%d", &num );

  while ( num >= control ) {
    printf ( "%d\t%d\n", control, squares );
    ++control;
    squares = control * control;
  }

return 0;
}
