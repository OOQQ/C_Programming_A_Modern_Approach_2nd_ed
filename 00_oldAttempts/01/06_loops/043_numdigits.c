/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag105, prog043, numdigits.c
 * -------------------------------------
 * write a program that sums a series of integers entered by the user
 */

#include <stdio.h>

int main(void) {
	int num, buffer, result;

	printf("Enter a positive integer:");
	scanf("%d", &num);

	buffer = num;

	do {
		num /= 10;
		result++;
	} while (num != 0);

	printf("The number %d has %d digit(s)\n.", buffer, result);

return 0;
}

