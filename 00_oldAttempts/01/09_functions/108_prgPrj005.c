/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt09, pag217, prog108, prgPrj005.c
 * -------------------------------------
 * modify prog098 so that it includes the following functions:
 *
 * void create_magic_square(int n, char magic_square[n][n]);
 * void print_magic_square(int n, char magic_square[n][n]);
 */

#include <stdio.h>

#define MAXARRAY 99

void create_magic_square(char magic_square[][MAXARRAY], int size);
void print_magic_square(char magic_square[][MAXARRAY], int size);

int main(void) {
	char aMagicSquare[MAXARRAY][MAXARRAY] = {0};
	int size;

	do {
		printf("Enter size of the magic square (odd number):");
		scanf("%d", &size);
	} while (size % 2 == 0); /* it must be an odd number bro */

	create_magic_square(aMagicSquare, size);
	print_magic_square(aMagicSquare, size);

return 0;
}

void create_magic_square(char aMagicSquare[][MAXARRAY], int size) {
	int elements, i, posX = 0, posY = 0, nextXPos, nextYPos;

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

return;
}

void print_magic_square(char aMagicSquare[][MAXARRAY], int size) {
	int posX, posY;

	putchar('\n');
	for (posY = 0; posY < size; posY++) { /* print the arrays */
		for (posX = 0; posX < size; posX++) {
			printf("%.2d ", aMagicSquare[posY][posX]);
		}
		putchar('\n');
	}

return;
}
