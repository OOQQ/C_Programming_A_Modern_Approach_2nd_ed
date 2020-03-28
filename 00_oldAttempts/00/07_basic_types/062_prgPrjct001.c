/*
C Programming: A modern approach 2ed.
062 | Pag 157 | Chapter 7 | Programming Project 001 | 062_prgPrjct001.c
by: OOQQ
=======================================
The square2.c program of Section 6.3 will fail (usually by printing strange answers) if i * i exceeds the maximum int value. Run the program and determine the smallest value of n that causes failure. Try changing the type of i to short and running the program again. (Don't forget to update the conversion specification in the call of printf). Then try long. From these experiments determine the size of int bits of the machine.
*/

#include <stdio.h>

int main ( void )
{
  int num, i;

  printf ( "This program prints a table of squares.\n" );
  printf ( "Number of entries in table:" );
  scanf ( "%d", &num );

  for ( i = 1; i <= num; i++ ) {
    printf ( "%10d%10d\n", i, i * i );
  }

return 0;
}

/* size of bits in int is 2,147,483,647 or 32-bit */
