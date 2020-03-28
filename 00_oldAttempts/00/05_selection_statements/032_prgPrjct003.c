/*
C Programming: A modern approach 2ed.
032 | Pag 096 | Chapter 5 | Programming Project 003 | 032_prgPrjct003.c
by: OOQQ
=======================================
Modify the broker.c program of section 5.2 by making both of the following changes:
a) Ask the user to enter the number of shares and the price per share, instead of the total amount of the trade.
b) Add statements that compute the commission charged by a rival broker ($33 plus 3c per share for fewer than 2000 shares; $33 plus 2c per share for 2000 shares or more). Display the rival's commision as well as the commission charged by the original broker.
*/

#include <stdio.h>

int main ( void )
{
  float amount, price, total, commission, rivalCommission;

  printf ( "Enter amount of shares: #" );
  scanf ( "%f", &amount );
  printf ( "Enter price per share: $" );
  scanf ( "%f", &price );

  total = amount * price;

  if ( total <= 38.9f ) {
  printf ( "Minimum amount not met.\n" );
  } else if ( total <= 2499.9f ) {
  commission = 30.0f + .017f * total;
  } else if ( total >= 2500.0f && total <= 6499.9f ) {
  commission = 56.0f + .0066f * total;
  } else if ( total >= 6500.0f && total <= 19999.9f ) {
  commission = 76.0f + .0034f * total;
  } else if ( total >= 20000.0f && total <= 49999.9f ) {
  commission = 100.0f + .0022f * total;
  } else if ( total >= 50000.0f && total <= 499999.9f ) {
  commission = 155.0f + .0011f * total;
  } else if ( total >= 500000.0f ) {
  commission = 255.0f + .0009f * total;
  }

  if ( total < 2000 ) {
  rivalCommission = 33.0f + ( .03f * amount );
  } else {
  rivalCommission = 33.0f + ( .02f * amount );  
  }

  printf ( "Original broker commission: $%.2f\n", commission );
  printf ( "Rival broker commission: $%.2f\n", rivalCommission );

return 0;
}
