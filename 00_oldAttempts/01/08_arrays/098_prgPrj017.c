/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag181, prog098, prgPrj017.c
 * -------------------------------------
 * write a program that writes a nxn magic square
 *
 * Enter size of the magic square (odd number): 5
 *
 * 17 24 01 08 15
 * 23 05 07 14 16
 * 04 06 13 20 22
 * 10 12 19 21 03
 * 11 18 25 02 09
 */

#include <stdio.h>

#define MAXARRAY 99

int main(void) {
	 char aMagicSquare[MAXARRAY][MAXARRAY] = {0};
	 int size, elements, i, posX = 0, posY = 0, nextXPos, nextYPos;

	do {
		printf("Enter size of the magic square (odd number):");
		scanf("%d", &size);
	} while (size % 2 == 0); /* it must be an odd number bro */

	posX = size / 2; /* starting position */
	aMagicSquare[posY][posX] = 1; /* place first number in the middle of first row */
	elements = size * size; /* number of elements to place */

	for (i = 2; i <= elements; i++) {
		nextXPos = posX + 1;
		nextYPos = posY - 1;

		if (nextYPos < 0) { /* direction sniffer overflow top */
			nextYPos = size - 1;
		}
		if (nextXPos > size - 1) { /* direction sniffer overflow right */
			nextXPos = 0;
		}
		if (aMagicSquare[nextYPos][nextXPos] != 0) { /* direction sniffer next index not free, place and update vars */
			aMagicSquare[++posY][posX] = i;
			nextYPos = posY;
			nextXPos = posX;
		} else { /* next index free, place and update vars */
			aMagicSquare[nextYPos][nextXPos] = i;
			posY = nextYPos;
			posX = nextXPos;
		}
	}

	for (posY = 0; posY < size; posY++) { /* print the arrays */
		for (posX = 0; posX < size; posX++) {
			printf("%.2d ", aMagicSquare[posY][posX]);
		}
		putchar('\n');
	}

return 0;
}
