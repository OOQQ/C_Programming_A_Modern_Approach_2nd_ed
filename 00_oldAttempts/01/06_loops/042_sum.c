/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag103, prog042, sum.c
 * -------------------------------------
 * write a program that sums a series of integers entered by the user
 */

#include <stdio.h>

int main(void) {
	int num, result;

	printf("This program sums a series of integers\n");
	printf("Enter integers (0 to terminate):");

	scanf("%d", &num);

	do {
		result += num;
		scanf("%d", &num);
	} while (num != 0);

	printf("\nThe sum is: %d\n", result);

return 0;
}

