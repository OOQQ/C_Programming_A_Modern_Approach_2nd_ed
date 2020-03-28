/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag110, prog045, square3.c
 * -------------------------------------
 * the square.c program can be rewritten using an odd method
 */

#include <stdio.h>

int main(void) {
	int i, n, odd, square;

	printf("This program prints a table of squares.\n");
	printf("Number of entries in table:");
	scanf("%d", &n);

	i = 1;
	odd = 3;

	for (square = 1; i <= n; odd += 2) {
		printf("%10d%10d\n", i, square);
		i++;
		square += odd;
	}

return 0;
}

