/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag122, prog048, prgPrj002.c
 * -------------------------------------
 * write a program that asks the user to enter two integers, then calculates
 * and displays their greatest common divisor (GCD)
 */

#include <stdio.h>

int main(void) {
	int num1, num2, gcd, remainder;

	printf("Enter two integers");
	scanf("%d %d", &num1, &num2);

/* test for edge cases with 0 */
	if (num1 == 0 || num2 == 0) {
		gcd = 0;
		printf("Greatest common divisor: %d\n", gcd);
			return 0;
	}

/* main algorithm (euclidean) */
	do {
		remainder = num1 % num2;
		num1 = num2;
		num2 = remainder;
		gcd = num1;
	} while (num2 != 0);

	printf("Greatest common divisor: %d\n", gcd);

return 0;
}

