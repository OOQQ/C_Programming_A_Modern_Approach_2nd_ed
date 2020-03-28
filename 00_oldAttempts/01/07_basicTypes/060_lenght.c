/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag142, prog060, lenght.c
 * -------------------------------------
 * determines the lenght of a message
 */

#include <stdio.h>

int main(void) {
	char ch;
	int len = 0;

	printf("Enter a message:");
	ch = getchar();

	while (ch != '\n') {
		len++;
		ch = getchar();
	}

	printf("Your message was %d character(s) long.\n", len);

return 0;
}

