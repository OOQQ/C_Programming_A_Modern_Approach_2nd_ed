/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt02, pag035, prog008, prgPrj012.c
 * -------------------------------------
 * write a program that calculates the remaining balance on a loan after the
 * first, second, and third monthly payments
 */

#include <stdio.h>

int main(void) {
	float loan, interest, payment, loanPercent;

	printf("Enter amount of loan:");
	scanf("%f", &loan);
	printf("Enter annual interest rate:");
	scanf("%f", &interest);
	printf("Enter monthly payment:");
	scanf("%f", &payment);

	loanPercent = ((loan * interest) / 100) / 12;
	loan -= payment;
	loan += loanPercent;
	printf("\nLoan remaining after first payment: $%.2f", loan);

	loanPercent = ((loan * interest) / 100) / 12;
	loan -= payment;
	loan += loanPercent;
	printf("\nLoan remaining after sencd payment: $%.2f", loan);

	loanPercent = ((loan * interest) / 100) / 12;
	loan -= payment;
	loan += loanPercent;
	printf("\nLoan remaining after third payment: $%.2f\n", loan);

return 0;
}

