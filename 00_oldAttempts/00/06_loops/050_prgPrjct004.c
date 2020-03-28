/*
C Programming: A modern approach 2ed.
050 | Pag 123 | Chapter 6 | Programming Project 004 | 050_prgPrjct004.c
by: OOQQ
=======================================
Add a loop to the broker.c program of Section 5.2 so that the user can enter more than one trade and the program will calculate the commission on each. The program should terminate when the user enters 0 as the trade value.
*/

  /*
  C Programming: A modern approach 2ed.
  028 | Pag 081 | Chapter 5 | Calculating a Broker's Commission | broker.c
  by: ekenmer
  =======================================
  Our next program asks the user to enter the amount of the trade, then displays the amount of the commision following this table:

  Transaction size: Commission rate:
  Under $2500:	    $30 + 1.7%
  $2500-$6500:	    $56 + 0.66%
  $6500-$20000:	    $76 + 0.34%
  $20000-$50000:    $100 + 0.22%
  $50000-$500000:   $155 + 0.11%
  Over $500000:	    $255 + 0.09%

  The minimum charge is $39.
  */

  #include <stdio.h>

  int main ( void )
  {
    int switcher;
    float amount, commission;

    for ( ; ; ) {
      printf ( "\nEnter value of the trade: $" );
      scanf ( "%f", &amount );
      switcher = amount;
	switch ( switcher ) {
	  case 0 :
	   return 0;
	  default :
	    if ( amount <= 38.9f ) {
	      printf( "Minimum amount not met.\n" );
	    } else if ( amount <= 2499.9f ) {
	      commission = 30.0f + .017f * amount;
	    } else if ( amount >= 2500.0f && amount <= 6499.9f ) {
	      commission = 56.0f + .0066f * amount;
	    } else if ( amount >= 6500.0f && amount <= 19999.9f ) {
	      commission = 76.0f + .0034f * amount;
	    } else if ( amount >= 20000.0f && amount <= 49999.9f ) {
	      commission = 100.0f + .0022f * amount;
	    } else if ( amount >= 50000.0f && amount <= 499999.9f ) {
	      commission = 155.0f + .0011f * amount;
	    } else if ( amount >= 500000.0f ) {
	      commission = 255.0f + .0009f * amount;
	    }
	    printf ( "Commission: $%.2f\n", commission );
	    break;
	}
    }
  }
