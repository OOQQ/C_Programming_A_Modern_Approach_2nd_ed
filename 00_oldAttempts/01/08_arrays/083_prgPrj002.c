/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag178, prog083, prgPrj002.c
 * -------------------------------------
 * modify the repdigit.c program so that it prints a table showing how many
 * times each digit appears in the number
 *
 * Enter a number: 939577
 * Digit:	0 1 2 3 4 5 6 7 8 9
 * Occurrences: 0 0 0 1 0 1 0 2 0 0
 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void) {
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
		printf("Digit:\t\t0 1 2 3 4 5 6 7 8 9\n");
		printf("Occurrences:\t");
		for (i = 0; i < 10; i++) {
			printf("%d ", digitsDecomposed[i]);
		}
		printf("\n");
	} else {
		printf("No repeated digit.\n");
	}

return 0;
}
