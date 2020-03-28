/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag158, prog071, prgPrj010.c
 * -------------------------------------
 * write a program that counts the number of vowels in a sentence
 *
 * Enter a sentence: And that's the way it is.
 * Your sentence contains: 6 vowels.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch = 0;
	int sum = 0;

	printf("Enter a sentence:");

	while ((ch = getchar()) != '\n') {
		switch (toupper(ch)) {
			case 'A': case 'I': case 'U': case 'E': case 'O':
			sum++;
				break;
		}
	}

	printf("Your sentence contains: %d vowels.\n", sum);

return 0;
}
