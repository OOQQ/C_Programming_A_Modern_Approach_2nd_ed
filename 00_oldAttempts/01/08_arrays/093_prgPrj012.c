/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag180, prog093, prgPrj012.c
 * -------------------------------------
 * modify prog066 so that the SCRABBLE letter values are stored in an array
 *
 * AEILNORSTU=1, DG=2, BCMP=3, FHVWY=4, K=5, JX=8, QZ=10.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
	/* correlation:									 A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P,  Q, R, S, T, U, V, W, X, Y,  Z */
	const int aScrabbleValues[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	int character, score;

	printf("Enter a word:");

	while (character != '\n') {
		character = toupper(getchar());
		score += aScrabbleValues[character - 'A']; /* converts 'A' value = 65 into array[0] */
	}

	printf("Scrabble value: %d\n", score);

return 0;
}
