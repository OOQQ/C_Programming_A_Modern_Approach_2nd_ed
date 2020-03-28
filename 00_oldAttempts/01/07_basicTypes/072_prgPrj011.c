/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag158, prog072, prgPrj011.c
 * -------------------------------------
 * write a program that takes a first name and last name entered by the user and
 * displays the last name, a comma, and the first initial, followed by a period
 *
 * Enter first and last name: Emmet Brown
 * Brown, E.
 */

#include <stdio.h>

int main(void) {
	char ch, initial;

	printf("Enter first and last name:");

	initial = getchar();

	while ((ch = getchar()) != ' ') { /* skip chars until space */
		;
	}

	while ((ch = getchar()) != '\n') {
		putchar(ch);
	}

	printf(", %c.\n", initial);

return 0;
}
