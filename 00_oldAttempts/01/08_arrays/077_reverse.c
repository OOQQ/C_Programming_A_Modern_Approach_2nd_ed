/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag164, prog077, reverse.c
 * -------------------------------------
 * our first array program prompts the user to enter a series of numbers, then
 * writes the numbers in reverse order
 *
 * Enter 10 numbers: 0 1 2 3 4 5 6 7 8 9
 * In reverse order: 9 8 7 6 5 4 3 2 1 0
 */

#include <stdio.h>

#define N 10

int main(void) {
	int a[N], i;

	printf("Enter %d numbers:", N);

	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	printf("In reverse order: ");
	for (i = N - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}

	printf("\n");

return 0;
}
