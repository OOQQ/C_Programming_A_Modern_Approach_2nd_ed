/*
C Programming: A modern approach 2ed.
103 | Pag 207 | Chapter 9 | Quicksort | qsort.c
by: OOQQ
=======================================
Let's develop a recursive function named quicksort that uses the Quicksort algorithm to sort an array of integers. To test the function, we'll have main read 10 numbers into an array, call quicksort to sort the array, then print the elements in the array:

Enter 10 numbers to be sorted: 9 16 47 82 4 66 12 3 25 51
In sorted order: 3 4 9 12 16 25 47 51 66 82
*/

#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);

int split(int a[], int low, int high);

int main(void) {
	int a[N], i;

	printf("Enter %d numbers to be sorted:", N);

	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	quicksort(a, 0, N - 1);

	printf("In sorted order: ");

	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");

return 0;
}

void quicksort(int a[], int low, int high) {
	int middle;

	if (low >= high) {
		return;
	}

	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
	int part_element = a[low];


	for (;;) {
		while (low < high && part_element <= a[high]) {
			high--;
		}
		if (low >= high) {
			break;
		}

		a[low++] = a[high];

		while (low < high && a[low] <= part_element) {
			low++;
		}
		if (low >= high) {
			break;
		}

		a[high--] = a[low];
	}

	a[high] = part_element;
	return high;
}
