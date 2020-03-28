/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag179, prog090, prgPrj009.c
 * -------------------------------------
 * write a program that generates a random walk across a 10x10 array
 *
 * A B C . . . . . . .
 * F E D M N . . . . .
 * G J K L O . . . . .
 * H I . Q P . . . . .
 * . . . R . . . . . .
 * . . . S . . . . . .
 * . . . T U V . . . .
 * . . . . . W X Y Z .
 * . . . . . . . . . .
 * . . . . . . . . . .
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAYLENGTH 10

int main(void) {
	char aGrid[ARRAYLENGTH][ARRAYLENGTH] = {'A'}; /* first value already initialized */
	char character = 'A';
	int aDirectionSniffer[4] = {1, 1, 1, 1}; /* the direction sniffer */
	int posY = 0, posX = 0, i;

/* start the RNG */
	srand((unsigned) time(NULL));

	do { /* main loop start */
/* direction sniffer */
		if (posX == 0 || aGrid[posY][posX - 1] != 0) {
			aDirectionSniffer[0] = 0; /* left forbidden */
		} if (posY == ARRAYLENGTH - 1 || aGrid[posY + 1][posX] != 0) {
			aDirectionSniffer[1] = 0; /* down forbidden */
		} if (posY == 0 || aGrid[posY - 1][posX] != 0) {
			aDirectionSniffer[2] = 0; /* top forbidden */
		} if (posX == ARRAYLENGTH - 1 || aGrid[posY][posX + 1] != 0) {
			aDirectionSniffer[3] = 0; /* right forbidden  */
		}

/* if everything is forbidden, stop search */
		if (aDirectionSniffer[0] == 0 && aDirectionSniffer[1] == 0 && aDirectionSniffer[2] == 0 && aDirectionSniffer[3] == 0) {
			break;
		}

/* pick a random available direction & place next character */
		do {
			i = rand() % (sizeof(aDirectionSniffer) / sizeof(aDirectionSniffer[0]));
		} while (aDirectionSniffer[i] == 0);

		switch (i) {
			case 0: posX--; /* left selected */
				break;
			case 1: posY++; /* down selected  */
				break;
			case 2: posY--; /* top selected */
				break;
			case 3: posX++; /* right selected */
				break;
		}
		aGrid[posY][posX] = ++character; /* places next character in selected position */

/* resets the sniffer */
		for (i = 0; i < (sizeof(aDirectionSniffer) / sizeof(aDirectionSniffer[0])); i++) {
			aDirectionSniffer[i] = 1;
		}
	} while (character != 'Z'); /* main loop end */

/* prints the final result */
	for (posY = 0; posY < ARRAYLENGTH; posY++) {
		for (posX = 0; posX < ARRAYLENGTH; posX++) {
			if (aGrid[posY][posX] == 0) { /* prints a . where a 0 is found */
				printf(". ");
			} else {
				printf("%c ", aGrid[posY][posX]); /* prints the character */
			}
		}
		printf("\n");
	}

return 0;
}

