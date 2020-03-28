/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag123, prog049, prgPrj003.c
 * -------------------------------------
 * write a program that asks the user to enter a fraction, then reduces the
 * fraction to lowest terms
 */

#include <stdio.h>

int main(void) {
	int num, denom, gcd, numBuffer, denomBuffer, remainder;

	printf("Enter a fraction:");
	scanf("%d/%d", &num, &denom);

	numBuffer = num;
	denomBuffer = denom;

/* test for edge cases with 0 */
	if (num == 0 || denom == 0) {
		gcd = 0;
		printf("Greatest common divisor: %d\n", gcd);
			return 0;
	}

/* main algorith (euclidean) */
	do {
		remainder = num % denom;
		num = denom;
		denom = remainder;
		gcd = num;
	} while (denom != 0);

/* first compute the gcd of num & denom, then divide both by the gcd */
	printf("In lowest terms: %d/%d\n", numBuffer /= gcd, denomBuffer /= gcd);

return 0;
}

