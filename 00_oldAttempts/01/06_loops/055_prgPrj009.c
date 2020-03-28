/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag123, prog055, prgPrj009.c
 * -------------------------------------
 * prog012, asked you to write a program that calculates the remaining balance
 * on a loan after the first, second and third monthly payment, modify the
 * program so that it also asks the user to enter the number of payments and
 * then displays the balance remaining after each of these payments
 */

#include <stdio.h>

int main(void) {
	float loan, interest, payment, loanPercent;
	int numberOfPayments;

	printf("Enter amount of loan:");
	scanf("%f", &loan);
	printf("Enter annual interest rate:");
	scanf("%f", &interest);
	printf("Enter monthly payment:");
	scanf("%f", &payment);
	printf("Enter number of payments:");
	scanf("%d", &numberOfPayments);

	do {
	loanPercent = ((loan * interest) / 100) / 12;
	loan -= payment;
	loan += loanPercent;
	printf("\n#%.2d payments left. Loan remaining: $%.2f", numberOfPayments, loan);
	numberOfPayments--;
	} while (numberOfPayments);

return 0;
}

