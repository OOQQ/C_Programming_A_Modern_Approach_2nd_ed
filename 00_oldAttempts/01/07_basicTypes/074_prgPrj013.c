/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag159, prog074, prgPrj013.c
 * -------------------------------------
 * write a program that calculates the average word length for a sentence
 *
 * Enter a sentence: entered a sentence
 * Average word length: 5.3
 */

#include <stdio.h>

int main(void) {
	int lettersTotal = 0, words = 1;
	char ch;

	printf("Enter a sentence:");

	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			words++;
		} else {
			lettersTotal++;
		}
	}

	printf("Average word length: %.1f\n", ((float) lettersTotal / words));

return 0;
}
