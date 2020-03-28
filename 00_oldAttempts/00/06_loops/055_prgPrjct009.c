/*
C Programming: A modern approach 2ed.
055 | Pag 123 | Chapter 6 | Programming Project 009 | 055_prgPrjct009.c
by: OOQQ
=======================================
Programming project 8 in chapter 2 asked you to write a program that calculates the remaining balance on a loan after the first, second and third monthly payments. Modify the program so that it also asks the user to enter the number of payments and then displays the balance remaining after each of these payments.
*/

#include <stdio.h>

int main ( void )
{
  float amount, interest, monthlyPayment, taxEveryMonth, totalDebt;
  int numberOfMonths;

  printf ( "Enter amount of loan:" );
  scanf ( "%f", &amount );
  printf ( "Enter interest rate:" );
  scanf ( "%f", &interest );
  printf ( "Enter monthly payment:" );
  scanf ( "%f", &monthlyPayment );
  printf ( "Enter number of months" );
  scanf ( "%d", &numberOfMonths );

  printf ( "\n" );

  for ( ; numberOfMonths > 0 ; numberOfMonths-- ) {
    taxEveryMonth = ( ( amount * interest ) / 100 ) / 12;
    amount = amount - monthlyPayment;
    totalDebt = amount + taxEveryMonth;
    printf( "%d more months to go, payment remaining: $%.2f\n", numberOfMonths, totalDebt );
  }

   return 0;
}
