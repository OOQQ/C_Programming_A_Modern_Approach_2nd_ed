/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag102, prog041, square.c
 * -------------------------------------
 * write a program that prints a table of squares, the program will first prompt
 * the user to enter a number n, it will then print n lines of output, with each
 * line containing a number between 1 and n together with its square
 */

#include <stdio.h>

int main(void) {
	int num, squares, control;

	control = 1;
	squares = 1;

	printf("This program prints a table of squares.\n");
	printf("Number of entries in table:");
	scanf("%d", &num);

	while (num >= control) {
		printf("%d\t%d\n", control, squares);
		++control;
		squares = control * control;
	}

return 0;
}

