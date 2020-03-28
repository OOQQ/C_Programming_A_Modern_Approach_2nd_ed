/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag179, prog089, prgPrj008.c
 * -------------------------------------
 * modify prog088 so that it prompts five quiz grades for each of five students,
 * then computes the total score and average score for each student, and the
 * average score, high score and low score for each quiz
 *
 * student 1 grades:  8  3  9  0 10
 * student 2 grades:  3  5 17  1  1
 * student 3 grades:  2  8  6 23  1
 * student 4 grades: 15  7  3  2  9
 * student 5 grades:  6 14  2  6  0
 *
 * student 1: total: 30, average: 6.0
 * student 2: total: 27, average: 5.4
 * student 3: total: 40, average: 8.0
 * student 4: total: 36, average: 7.2
 * student 5: total: 28, average: 5.6
 *
 * quiz 1 high: 15, low: 2, average: 6.8
 * quiz 2 high: 14, low: 3, average: 7.4
 * quiz 3 high: 17, low: 2, average: 7.4
 * quiz 4 high: 23, low: 0, average: 6.4
 * quiz 5 high: 10, low: 0, average: 4.2
 */

#include <stdio.h>

#define N 5

int main(void) {
	int array[N][N];
	int arrayA, arrayB, high = 0, low = 9001, i = 0;

	for (arrayA = 0; arrayA < N; arrayA++) {
		printf("Student %d grades:", arrayA + 1);
		for (arrayB = 0; arrayB < N; arrayB++) {
			scanf("%d", &array[arrayA][arrayB]);
		}
	}

/* sums each row */
	for (arrayA = 0; arrayA < N; arrayA++) {
		printf("\nStudent %d: ", arrayA + 1);
		for (arrayB = 0; arrayB < N; arrayB++) {
			i += array[arrayA][arrayB];
		}

		printf("total: %2d, average: %2.1f", i, ((float) i / 5.0f));
		i = 0; /* resets the counter to store the next row sum */
	}

	printf("\n");

/* sums each column */
	for (arrayA = 0; arrayA < N; arrayA++) {
		printf("\nQuiz %d ", arrayA + 1);
		for (arrayB = 0; arrayB < N; arrayB++) {
			i += array[arrayB][arrayA];
			if (array[arrayB][arrayA] >= high) { /* compares current value against high to store */
				high = array[arrayB][arrayA];
			} if (array[arrayB][arrayA] <= low) { /* compares current value against low to store */
				low = array[arrayB][arrayA];
			}
		}

		printf("high: %2d, low: %d, average: %2.1f ", high, low, ((float) i / 5.0f));
		i = 0; /* resets the counter to store the next column sum */
		high = 0; /* resets high */
		low = 9001; /* resets low */
	}

	printf("\n");

return 0;
}
