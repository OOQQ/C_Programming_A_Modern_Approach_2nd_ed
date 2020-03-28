/*
C Programming: A modern approach 2ed.
039 | Pag 097 | Chapter 5 | Programming Project 010 | 039_prgPrjct010.c
by: OOQQ
=======================================
Using the switch statement, write a program that converts a numerical grade into a letter grade.

Use the following scale: A = 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59. Print an error message if the grade is larger than 100 or less than 0.
*/

#include <stdio.h>

int main ( void )
{
  int grade, checker;

  printf ( "Enter numerical grade from 0 to 100:" );
  scanf ( "%d", &grade );

  if ( grade < 0 || grade > 100 ) {
    checker = 0;
  } else if ( grade >= 0 && grade <= 59 ) {
    checker = 1;
  } else if ( grade >= 60 && grade <= 69 ) {
    checker = 2;
  } else if ( grade >= 70 && grade <= 79 ) {
    checker = 3;
  } else if ( grade >= 80 && grade <= 89 ) {
    checker = 4;
  } else {
    checker = 5;
  }

  switch ( checker ) {
    case 0 : printf ( "Error!" );		        break;
    case 1 : printf ( "Letter grade F" );		break;
    case 2 : printf ( "Letter grade D" );		break;
    case 3 : printf ( "Letter grade C" );		break;
    case 4 : printf ( "Letter grade B" );		break;
    case 5 : printf ( "Letter grade A" );		break;
  }

return 0;
}
