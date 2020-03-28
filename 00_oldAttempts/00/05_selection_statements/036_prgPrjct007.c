/*
C Programming: A modern approach 2ed.
036 | Pag 096 | Chapter 5 | Programming Project 007 | 036_prgPrjct007.c
by: OOQQ
=======================================
Write a program that finds the largest and smallest of four integers entered by the user, use as few if statements as possible.
*/

#include <stdio.h>

int main ( void )
{
  int a, b, c, d, largest, smallest;

  printf ( "Enter four integers:" );
  scanf ( "%d %d %d %d", &a, &b, &c, &d );

  if ( a > b && a > c && a > d ) {
  largest = a;
  } else if ( b > a && b > c && b > d ) {
  largest = b;
  } else if ( c > a && c > b && c > d ) {
  largest = c;
  } else {
  largest = d;
  }

  if ( a < b && a < c && a < d ) {
  smallest = a;
  } else if ( b < a && b < c && b < d ) {
  smallest = b;
  } else if ( c < a && c < b && c < d ) {
  smallest = c;
  } else {
  smallest = d;
  }

  printf ( "Largest: %d\n", largest );
  printf ( "Smallest: %d\n", smallest );

return 0;
}
