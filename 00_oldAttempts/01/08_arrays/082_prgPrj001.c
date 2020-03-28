/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag178, prog082, prgPrj001.c
 * -------------------------------------
 * modify the repdigit.c program so that it shows which digit (if any) were
 * repeated
 *
 * Enter a number: 939577
 * Repeated digit(s): 7 9
 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main (void) {
	int digitsDecomposed[10] = {0};
	int digit, repeated, i;
	long n;

	printf("Enter a number:");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		digitsDecomposed[digit]++;
		if (digitsDecomposed[digit] > 1) {
			repeated = TRUE;
		}
		n /= 10;
	}

	if (repeated) {
		printf("Repeated digit(s):");
		for (i = 0; i < 10; i++) {
			if (digitsDecomposed[i] > 1) {
				printf(" %d", i);
			}
		}
		printf("\n");
	} else {
		printf("No repeated digit.\n");
	}

return 0;
}
