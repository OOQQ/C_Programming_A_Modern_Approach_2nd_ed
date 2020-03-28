/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag131, prog057, sum2.c
 * -------------------------------------
 * sums a series of numbers (using long variables)
 */

#include <stdio.h>

int main(void) {
	long n, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate):");

	scanf("%ld", &n);

	while (n != 0) {
		sum += n;
		scanf("%ld", &n);
	}

	printf("The sum is %ld\n", sum);

return 0;
}

