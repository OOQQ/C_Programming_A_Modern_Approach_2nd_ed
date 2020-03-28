/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag166, prog078, repdigit.c
 * -------------------------------------
 * our next program checks whether any of the digits in a number appear more
 * than once, after the user enters a number, the program prints either
 * repeated digit, or no repeated digit
 *
 * Enter a number: 28212
 * Repeated Digit
 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

int main(void) {
	bool digit_seen[10] = {FALSE};
	int digit;
	long n;

	printf("Enter a number:");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
			break;
		}
		digit_seen[digit] = TRUE;
		n /= 10;
	}

	if (n > 0) {
		printf("Repeated digit\n");
	} else {
		printf("No repeated digit\n");
	}

return 0;
}
