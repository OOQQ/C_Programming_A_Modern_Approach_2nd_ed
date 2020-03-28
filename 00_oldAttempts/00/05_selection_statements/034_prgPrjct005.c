/*
C Programming: A modern approach 2ed.
034 | Pag 096 | Chapter 5 | Programming Project 005 | 034_prgPrjct005.c
by: OOQQ
=======================================
In one state, single residents are subject to the following income tax:

Income		Amount of tax

Less than $750	1% of income
$750-$2250	$7.50 plus 2% of amount over $750
$2250-$3750	$37.50 plus 3% of amount over $2250
$3750-$5250	$82.50 plus 4% of amount over $3750
$5250-$9000	$142.50 plus 5% of amount over $5250
Over $9000!!	$230.00 plus 6% of amount over $9000!!

Write a program that asks the user to enter the amount of taxable income, then displays the tax due.
*/

#include <stdio.h>

int main ( void )
{
  float amount;

  printf ( "Enter the amount of taxable income:" );
  scanf ( "%f", &amount );

  printf ( "Tax due is : $");

  if ( amount < 750 ) {
  printf ( "%.2f\n", 7.50f + (amount * .02) );
  } else if ( amount >= 750.0f && amount <= 3750.0f ) {
  printf ( "%.2f\n", 37.50f + (amount * .03) );
  } else if ( amount >= 3750.0f && amount <= 5250.0f ) {
  printf ( "%.2f\n", 82.50f + (amount * .04) );
  } else if ( amount >= 5250.0f && amount <= 9000.0f ) {
  printf ( "%.2f\n", 142.50f + (amount * .05) );
  } else {
  printf ( "%.2f\n", 230.00f + (amount * .06) );
  }

return 0;
}
