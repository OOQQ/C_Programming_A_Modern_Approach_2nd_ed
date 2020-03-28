/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt09, pag217, prog106, prgPrj003.c
 * -------------------------------------
 * modify prog090 so that includes generate_random_walk & print_array functions
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAYLENGTH 10

void generate_random_walk(char aGrid[][ARRAYLENGTH]);
void print_array(char aGrid[][ARRAYLENGTH]);

int main(void) {
	char aGrid[ARRAYLENGTH][ARRAYLENGTH] = {'A'}; /* first value already initialized */

	generate_random_walk(aGrid);
	print_array(aGrid);

return 0;
}

/* generates the random walk */
void generate_random_walk(char aGrid[][ARRAYLENGTH]) {
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
			aDirectionSniffer[3] = 0; /* right forbidden */
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
			case 0: posX--; /* left */
				break;
			case 1: posY++; /* down */
				break;
			case 2: posY--; /* top */
				break;
			case 3: posX++; /* right */
				break;
		}
		aGrid[posY][posX] = ++character; /* place next character */

/* resets the sniffer */
		for (i = 0; i < (sizeof(aDirectionSniffer) / sizeof(aDirectionSniffer[0])); i++) {
			aDirectionSniffer[i] = 1;
		}
	} while (character != 'Z'); /* main loop end */

return;
}

/* prints the final result */
void print_array(char aGrid[][ARRAYLENGTH]) {
	int posY, posX;

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

return;
}

