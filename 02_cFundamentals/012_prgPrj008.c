/* c programming: a modern approach 2ed. chapt02, pag035, prgPrj008.c by OOQQ
 *
 * write a program that calculates the remaining balance on a loan after the
 * first, second, and third monthly payments
 */

#include <stdio.h>

int main(void) {
	float loanAmount, loanPercent, interestRate, monthlyPayment;

	printf("enter amount of loan: ");
	scanf("%f", &loanAmount);

	printf("enter interest rate: ");
	scanf("%f", &interestRate);

	printf("enter monthly payment: ");
	scanf("%f", &monthlyPayment);

	loanAmount -= monthlyPayment;
	printf("yeet %.2f", loanAmount);
	loanPercent = ((loanPercent * (interestRate / 100)) / 12);
	loanAmount += loanPercent;
	printf("\nLoan remaining after first payment: $%.2f", loanAmount);

	loanAmount -= monthlyPayment;
	loanPercent = ((loanPercent * (interestRate / 100)) / 12);
	loanAmount += loanPercent;
	printf("\nLoan remaining after secnd payment: $%.2f", loanAmount);

	loanAmount -= monthlyPayment;
	loanPercent = ((loanPercent * (interestRate / 100)) / 12);
	loanAmount += loanPercent;
	printf("\nLoan remaining after third payment: $%.2f", loanAmount);

return 0;
}
