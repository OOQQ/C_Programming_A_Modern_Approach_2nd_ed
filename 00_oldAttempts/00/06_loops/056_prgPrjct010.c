/*
C Programming: A modern approach 2ed.
056 | Pag 124 | Chapter 6 | Programming Project 010 | 056_prgPrjct010.c
by: OOQQ
=======================================
Programming Project 9 in Chapter 5 asked you to write a program that determines which of two dates comes earlier on the calendar. Generalize the program so that the user may enter any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered.
*/

#include <stdio.h>

int main ( void )
{
  int day, month, year, monthToDays, dayBuffer, monthBuffer, yearBuffer, sum, compare;
  compare = 1000000;

  printf ( "*** Write 0/0/0 to end ***\n" );

do {
  printf ( "Enter a date (dd/mm/yyyy):" );
  scanf ( "%d/%d/%d", &day, &month, &year );

/*
exact number of days on each month for accuracy.
*/
  switch ( month ) {
    case 0 : monthToDays = 0; break;
    case 11 : case 4 : case 6 : case 9 : monthToDays = 30;  break;
    case 2 : monthToDays = 28;				    break;
    default : monthToDays = 31;
  }

  sum = day + monthToDays + ( year * 365 );

  if ( sum < compare && sum != 0 ) {
  compare = sum;
  dayBuffer = day;
  monthBuffer = month;
  yearBuffer = year;
  }

} while ( year > 0 );

    printf ( "\n %d/%d/%d is the earliest date.\n", dayBuffer, monthBuffer, yearBuffer );

return 0;
}
