/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag179, prog088, prgPrj007.c
 * -------------------------------------
 * write a program that reads a 5x5 array of integers and then prints the
 * row sums and the column sums
 *
 * enter row 1: 8 3 9 0 10
 * enter row 2: 3 5 17 1 1
 * enter row 3: 2 8 6 23 1
 * enter row 4: 15 7 3 2 9
 * enter row 5: 6 14 2 6 0
 *
 * row totals: 30 27 40 36 28
 * column totals: 34 37 37 32 21
 */

#include <stdio.h>

#define N 5

int main(void) {
	int array[N][N];
	int arrayA, arrayB, i = 0;

	for (arrayA = 0; arrayA < N; arrayA++) {
		printf("Enter %d numbers, #%d:", N, arrayA + 1);
		for (arrayB = 0; arrayB < N; arrayB++) {
			scanf("%d", &array[arrayA][arrayB]);
		}
	}

/* sums each row */
	printf("\nRow totals: ");
	for (arrayA = 0; arrayA < N; arrayA++) {
		for (arrayB = 0; arrayB < N; arrayB++) {
			i += array[arrayA][arrayB];
		}
		printf("%d ", i);
		i = 0; /* resets the counter to store the next row sum */
	}

/* sums each column */
	printf("\nColumn totals: ");
	for (arrayA = 0; arrayA < N; arrayA++) {
		for (arrayB = 0; arrayB < N; arrayB++) {
			i += array[arrayB][arrayA];
		}
		printf("%d ", i);
		i = 0; /* resets the counter to store the next column sum */
	}

	printf("\n");

return 0;
}
