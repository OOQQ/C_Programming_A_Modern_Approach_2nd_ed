/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag157, prog064, prgPrj003.c
 * -------------------------------------
 * modify the sum2.c program to sum a series of double values
 */

#include <stdio.h>

int main(void) {
	double d, sum = 0;

	printf("This program sums a series of doubles.\n");
	printf("Enter doubles (0 to terminate):\n");

	do {
		sum += d;
		scanf("%lf", &d);
	} while (d);

	printf("\nThe sum is %.2lf\n", sum);

return 0;
}

