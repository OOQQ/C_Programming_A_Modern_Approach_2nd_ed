/*
C Programming: A modern approach 2ed.
098 | Pag 181 | Chapter 8 | Programming Project 017 | 098_prgPrjct017.c
by: OOQQ
=======================================
Write a program that writes a nxn magic square:

Enter size of the magic square: 5
17 24 01 08 15
23 05 07 14 16
04 06 13 20 22
10 12 19 21 03
11 18 25 02 09
*/

#include <stdio.h>

int main (void) {
	int n, i, j, li, lj, q;

	printf ("This program creates a magic square of a specified size.\n");
	printf ("The size must be an odd number between 1 and 99.\n");
	printf ("Enter size of magic square: ");

	scanf ("%d", &n);
	int square[n][n];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
        square[i][j] = 0;
		}
	}
	
	i =  0;
	j = n / 2;
	q = 1;
	
	while (q <= (n * n)) {
		if (square[i][j] == 0) {
        square[i][j] = q;
        li = i;
        lj = j;
        q++;
        i--;
        j++;
		} else {
			i = li + 1;
			j = lj;
		}

		if (i == -1) {
			i = (n - 1);
		} if (j == n) {
			j = 0;
		}
	}

	printf ("\n");

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
		printf ("%-4.2d", square[i][j]);
		}
		printf ("\n");
	}

	return 0;
}
