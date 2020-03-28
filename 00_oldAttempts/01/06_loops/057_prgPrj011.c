/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag124, prog057, prgPrj011.c
 * -------------------------------------
 * the value of mathematical constant e can be expressed as an infinite series
 * e = 1 + 1/1! + 1/2! + 1/3! + ...
 *
 * write a program that approximates e by computing the value of
 * e = 1 + 1/1! + 1/2! + 1/3! + ...  + 1/n!
 *
 * where n is an integer defined by the user
 */

#include <stdio.h>

int main(void) {
	int n, i, factorial = 1;
	float e = 1.0f;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		factorial *= i;
		e += (1.0f / factorial);
	}

	printf("%f", e);

return 0;
}

