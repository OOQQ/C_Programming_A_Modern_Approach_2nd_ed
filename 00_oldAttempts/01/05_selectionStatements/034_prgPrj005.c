/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag096, prog034, prgPrj005.c
 * -------------------------------------
 * in one state, single residents are subject to the following income tax
 *
 * Income				Amount of tax
 * Less than $750		1% of income
 * $750-$2250			$7.50 plus 2% of amount over $750
 * $2250-$3750			$37.50 plus 3% of amount over $2250
 * $3750-$5250			$82.50 plus 4% of amount over $3750
 * $5250-$9000			$142.50 plus 5% of amount over $5250
 * Over $9000			$230.00 plus 6% of amount over $9000
 *
 * write a program that asks the user to enter the amount of taxable income
 * then displays the tax due
 */

#include <stdio.h>

int main(void) {
	float income;

	printf("Enter the amount of taxable income: $");
	scanf("%f", &income);

	if (income < 750.0f) {
		printf("tax due is $%.2f\n", (income * 0.01f));
	} else if (income >= 750.0f && income < 2250.0f) {
		printf("tax due is $%.2f\n", 7.50f + (income * 0.02f));
	}  else if (income >= 2250.0f && income < 3750.0f) {
		printf("tax due is $%.2f\n", 37.50f + (income * 0.03f));
	} else if (income >= 3750.0f && income < 5250.0f) {
		printf("tax due is $%.2f\n", 82.50f + (income * 0.04f));
	} else if (income >= 5250.0f && income < 9000.0f) {
		printf("tax due is $%.2f\n", 142.50f + (income * 0.05f));
	} else {
		printf("tax due is $%.2f\n", 230.0f + (income * 0.06f));
	}

return 0;
}
