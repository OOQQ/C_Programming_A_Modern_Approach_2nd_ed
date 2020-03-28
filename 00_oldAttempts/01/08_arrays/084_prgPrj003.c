/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag178, prog084, prgPrj003.c
 * -------------------------------------
 * modify the repdigit.c program so that the user can enter more than one number
 * to be tested for repeated digits, the program must terminate when the user
 * enters less or equal than 0
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

	do {
	while (n) {
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

	printf("\nEnter a number:");
	scanf("%ld", &n);
	} while (n);

return 0;
}
