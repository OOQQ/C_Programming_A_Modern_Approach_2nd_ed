/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt09, pag216, prog104, prgPrj001.c
 * -------------------------------------
 * write a program that asks the user to enter a series of ints (stored in an
 * array), then sorts the integers by calling the function _selection_sort_,
 * when given an array with n elements _selection_sort_ must do the following:
 *
 * 1) search the array to find the largest element, then move it to the last
 * position in the array
 * 2) call itself recursively to sort the first n-1 elements in the aray
 */

#include <stdio.h>

#define MAXARRAY 8

void selection_sort(int a[], int n);

int main(void) {
	int i, aArray[MAXARRAY];

	printf("Enter %d numbers:", MAXARRAY);

	for (i = 0; i < MAXARRAY; i++) {
		scanf("%d", &aArray[i]);
	}

	selection_sort(aArray, MAXARRAY);

	printf("Sorted:");
	for (i = 0; i < MAXARRAY; i++) {
		printf(" %d", aArray[i]);
	}
	printf("\n");

return 0;
}

void selection_sort(int a[], int n) {
	int i, current = 0;

	if (n == 0) {
		return;
	}

	for (i = 1; i < n; i++)  {
		if (a[i] > a[current]) {
			current = i;
		}
	}

	i = a[n - 1];
	a[n - 1] = a[current];
	a[current] = i;

	selection_sort(a, n - 1);

return;
}

