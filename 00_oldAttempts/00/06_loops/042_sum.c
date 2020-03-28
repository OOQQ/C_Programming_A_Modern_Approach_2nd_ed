/*
C Programming: A modern approach 2ed.
042 | Pag 103 | Chapter 6 | Summing a series of numbers | sum.c
by: OOQQ
=======================================
Let's write a program that sums a series of integers entered by the user.
*/

#include <stdio.h>

int main ( void )
{
  int num, result ;

  result = 0;

  printf ( "This program sums a series of integers.\n" );
  printf ( "Enter integers (0 to terminate):" );

  scanf ( "%d", &num );
  while ( num != 0 ) {
    result += num;
    scanf ( "%d", &num );
  }

  printf ( "The sum is %d\n:", result );

return 0;
}
