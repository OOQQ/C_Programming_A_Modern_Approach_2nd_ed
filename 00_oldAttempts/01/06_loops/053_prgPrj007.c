/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag123, prog053, prgPrj007.c
 * -------------------------------------
 * rearrange the square3.c program so that the for loop initializes i, test i,
 * and increments i, don't rewrite the program, and don't use multiplications
 */

#include <stdio.h>

int main(void) {
	int i, n, odd, square = 1;

	printf("This program prints a table of squares.\n");
	printf("Number of entries in table:");
	scanf("%d", &n);

	odd = 3;

	for (i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, square);
		odd += 2;
		square += odd;
	}

return 0;
}

