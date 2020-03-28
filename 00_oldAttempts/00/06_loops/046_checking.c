/*
C Programming: A modern approach 2ed.
046 | Pag 115 | Chapter 6 | Balancing a checkbook | checking.c
by: OOQQ
=======================================
Let's develop a program that maintains a checkbook balance. The program will offer the user a menu of choices; clear the account balance, credit money to the account, debit money from the account, display the current balance, and exit the program. The choices are represented by the integers 0, 1, 2, 3 and 4.
*/

#include <stdio.h>

int main ( void )
{
  int cmd;
<<<<<<< HEAD
  float balance = 0.0f, credit, debit;
=======
  float: balance = 0.0f, credit, debit;
>>>>>>> master

  printf ( "*** ACME checkbook-balancing program ***\n" );
  printf ( "Commands: 0=clear, 1=credit, 2=debit, ");
  printf ( "3=balance, 4=exit\n\n" );

<<<<<<< HEAD
  for ( ; ; ) {
=======
  for ( ;; ) {
>>>>>>> master
    printf ( "Enter command:" );
    scanf ( "%d", &cmd );
    switch (cmd) {
      case 0 :
	balance = 0.0f;
	break;
      case 1 :
	printf ( "Enter amount of credit:" );
	scanf ( "%f", &credit );
	balance += credit;
	break;
      case 2 :
	printf ( "Enter amount of debit:" );
	scanf ( "%f", &debit );
	balance -= debit;
	break;
      case 3 :
	printf ( "Current balance: $%.2f\n", balance );
	break;
      case 4 :
	return 0;
      default :
	printf ( "*** ACME checkbook-balancing program ***\n" );
	printf ( "Commands: 0=clear, 1=credit, 2=debit, ");
	printf ( "3=balance, 4=exit\n\n" );
	break;
    }
  }
}
