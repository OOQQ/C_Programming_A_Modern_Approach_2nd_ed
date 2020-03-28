/*
C Programming: A modern approach 2ed.
038 | Pag 097 | Chapter 5 | Programming Project 009 | 038_prgPrjct009.c
by: OOQQ
=======================================
Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar.
*/

#include <stdio.h>

int main ( void )
{
  int day, day2, month, month2, monthConverted, monthConverted2, year, year2, sum, sum2;

  printf ( "Enter first date (dd/mm/yy):" );
  scanf ( "%d/%d/%d", &day, &month, &year );

  printf ( "Enter second date (dd/mm/yy):" );
  scanf ( "%d/%d/%d", &day2, &month2, &year2 );

/*
exact number of days on each month for accuracy
*/
  switch ( month ) {
    case 11 : case 4 : case 6 : case 9 : sum = 30;	break;
    case 2 : sum = 28;					break;
    default : sum = 31;
  }

  switch ( month2 ) {
    case 11 : case 4 : case 6 : case 9 : sum2 = 30;	break;
    case 2 : sum2 = 28;					break;
    default : sum2 = 31;
  }

  sum = sum + ( year * 365 ) + day;
  sum2 = sum2 + ( year2 * 365 ) + day2;

  if ( sum < sum2 ) {
  printf ( "%2.2d/%2.2d/%2.2d is earlier than %2.2d/%2.2d/%2.2d", day, month, year, day2, month2, year2 );
  } else {
  printf ( "%2.2d/%2.2d/%2.2d is earlier than %2.2d/%2.2d/%2.2d", day2, month2, year2, day, month, year );
  }

return 0;
}
