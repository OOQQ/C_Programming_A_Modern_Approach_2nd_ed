/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag157, prog062, prgPrj001.c
 * -------------------------------------
 * determine the size of int using the square2.c program
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

