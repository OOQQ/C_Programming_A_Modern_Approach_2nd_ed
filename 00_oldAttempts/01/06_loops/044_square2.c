/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag110, prog044, square2.c
 * -------------------------------------
 * the square.c program can be improved by converting its while loop
 * to a for loop
 */

#include <stdio.h>

int main(void) {
	int num, i;

	printf("This program prints a table of squares.\n");
	printf("Number of entries in table:");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		printf ("%10d%10d\n", i, i * i);
	}

return 0;
}

