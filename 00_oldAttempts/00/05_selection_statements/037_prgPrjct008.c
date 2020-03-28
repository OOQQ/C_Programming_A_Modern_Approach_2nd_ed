/*
C Programming: A modern approach 2ed.
037 | Pag 096 | Chapter 5 | Programming Project 008 | 037_prgPrjct008.c
by: OOQQ
=======================================
The following table shows the daily flights from one city to another:

Departure 	Arrival
8:00am		10:16am
9:43am		11:52am
11:19am		1:31pm
12:47am		3:00pm
2:00pm		4:08pm
3:45pm		5:55pm
7:00pm		9:20pm
9:45pm		11:58pm

Write a program that asks users to enter a time (expressed in hours and minutes). the program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user.
*/

#include <stdio.h>

int main ( void )
{
  int a, b, targetDeparture;
  int departure1 = 480;
  int departure2 = 583;
  int departure3 = 679;
  int departure4 = 767;
  int departure5 = 840;
  int departure6 = 945;
  int departure7 = 1140;
  int departure8 = 1305;

  printf ( "Enter the time:" );
  scanf ( "%d:%d", &a, &b );

  targetDeparture = (a * 60) + b;

  if ( targetDeparture > departure8 ) {
  printf ( "Closest departure time is 8:00am, arriving at 10:16am" );
  } else if ( targetDeparture <= departure1 ) {
  printf ( "Closest departure time is 8:00am, arriving at 10:16am" );
  } else if ( targetDeparture <= departure2 ) {
  printf ( "Closest departure time is 9:43am, arriving at 11:52am" );
  } else if ( targetDeparture <= departure3 ) {
  printf ( "Closest departure time is 11:19am, arriving at 1:31pm" );
  } else if ( targetDeparture <= departure4 ) {
  printf ( "Closest departure time is 12:47am, arriving at 3:00pm" );
  } else if ( targetDeparture <= departure5 ) {
  printf ( "Closest departure time is 2:00pm, arriving at 4:08pm" );
  } else if ( targetDeparture <= departure6 ) {
  printf ( "Closest departure time is 3:45pm, arriving at 5:55pm" );
  } else if ( targetDeparture <= departure7 ) {
  printf ( "Closest departure time is 7:00pm, arriving at 9:20pm" );
  } else if ( targetDeparture <= departure8 ) {
  printf ( "Closest departure time is 9:45pm, arriving at 11:58pm" );
  }

return 0;
}
