/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag157, prog063, prgPrj002.c
 * -------------------------------------
 * modify the square2.c program so that it pauses after 16 squares, the program
 * should use getchar to read a character, getchar won't allow the program to
 * continue until the user press the Enter key
 */

#include <stdio.h>

int main(void) {
	int num, i;

	printf("This program prints a table of squares.\n");
	printf("Number of entries in table:");
	scanf("%d", &num);
	getchar(); /* clears the newline char left over by scanf */

	printf("\n");

	for (i = 1; i <= num; i++) {
		printf("%10d%10d\n", i, i * i);

		if (i % 16 == 0) {
			printf("\nPress enter to continue...\n");
			getchar(); /* it doesnt matter what you type or compare, nothing is
						  read until you press enter */
		}
	}

return 0;
}
