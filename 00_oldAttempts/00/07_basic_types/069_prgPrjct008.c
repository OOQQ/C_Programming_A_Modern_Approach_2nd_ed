/*
C Programming: A modern approach 2ed.
069 | Pag 158| Chapter 7 | Programming Project 008 | 069_prgPrjct008.c
by: OOQQ
=======================================
Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-hour clock. The input will have the form hours:minutes followed by either A, P, AM or PM (lower or uppercase). White space is allowed.
*/

#include <stdio.h>

#define _0800_1016 480
#define _0943_1152 583
#define _1119_1331 679
#define _1247_1500 767
#define _1400_1608 840
#define _1545_1755 945
#define _1900_2120 1140
#define _2145_2358 1350

int main ( void )
{
  int a, b, currentTime;
  char am_pm;

  printf ( "Enter the time:" );
  scanf ( "%d:%d ", &a, &b );
  am_pm = getchar();

  currentTime = ( a * 60 ) + b;

  if ( am_pm == 'p' || am_pm == 'P' ) {
    currentTime += 720;
  }

  if ( currentTime > _2145_2358 ) {
  printf ( "Closest departure time is 8:00am, arriving at 10:16am" );
  } else if ( currentTime <= _0800_1016 ) {
  printf ( "Closest departure time is 8:00am, arriving at 10:16am" );
  } else if ( currentTime <= _0943_1152 ) {
  printf ( "Closest departure time is 9:43am, arriving at 11:52am" );
  } else if ( currentTime <= _1119_1331 ) {
  printf ( "Closest departure time is 11:19am, arriving at 1:31pm" );
  } else if ( currentTime <= _1247_1500 ) {
  printf ( "Closest departure time is 12:47am, arriving at 3:00pm" );
  } else if ( currentTime <= _1400_1608 ) {
  printf ( "Closest departure time is 2:00pm, arriving at 4:08pm" );
  } else if ( currentTime <= _1545_1755 ) {
  printf ( "Closest departure time is 3:45pm, arriving at 5:55pm" );
  } else if ( currentTime <= _1900_2120 ) {
  printf ( "Closest departure time is 7:00pm, arriving at 9:20pm" );
  } else if ( currentTime <= _2145_2358 ) {
  printf ( "Closest departure time is 9:45pm, arriving at 11:58pm" );
  }

return 0;
}
