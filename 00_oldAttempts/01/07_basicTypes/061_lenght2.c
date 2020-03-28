/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag142, prog061, lenght2.c
 * -------------------------------------
 * determines the lenght of a message
 */

#include <stdio.h>

int main(void) {
	int len = 0;

	printf("Enter a message:");

	while (getchar() != '\n') {
		len++;
	}

	printf("Your message was %d character(s) long.\n", len);

return 0;
}

