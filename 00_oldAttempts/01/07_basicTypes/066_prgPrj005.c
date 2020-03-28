/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag158, prog066, prgPrj005.c
 * -------------------------------------
 * in the scrabble game, players form words using small tiles, each containing
 * a letter and a value: AEILNORSTU=1, DG=2, BCMP=3, FHVWY=4, K=5, JX=8, QZ=10,
 * write a program that computes the value of any word, summing each value,
 * use the toupper() library function
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;
	int sum;

	printf("Enter a word:");

	while ((ch = getchar()) != '\n') {
		ch = toupper(ch);

		switch(ch) {
			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
			case 'R': case 'S': case 'T': case 'U':
				sum  += 1;
					break;
			case 'D': case 'G':
				sum += 2;
					break;
			case 'B': case 'C': case 'M': case 'P':
				sum += 3;
					break;
			case 'F': case 'H': case 'V': case 'W': case 'w': case 'Y':
				sum += 4;
					break;
			case 'K':
				sum += 5;
					break;
			case 'J': case 'X':
				sum += 8;
					break;
			case 'Q': case 'Z':
				sum += 10;
					break;
		}
	}

	printf("Scrabble value: %d\n", sum);

return 0;
}
