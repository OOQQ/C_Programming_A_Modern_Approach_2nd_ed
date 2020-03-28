/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag180, prog095, prgPrj014.c
 * -------------------------------------
 * write a program that reverses the words in a sentence
 *
 * Enter a sentence: Is it crazy how saying sentences backwards creates backwards sentences saying how crazy it is?
 * Reversed sentence: is it crazy how saying sentences backwards creates backwards sentences saying how crazy it Is?
 */

#include <stdio.h>

#define MAXARRAY 128

int main(void) {
	char aSentence[MAXARRAY] = {0}, endChar, i, print;

	printf("Enter a sentence:");

/* scans the sentence into the array & scans for the terminating character */
	for (i = 0; i < MAXARRAY; i++) {
		aSentence[i] = getchar();
		if (aSentence[i] == '.' || aSentence[i] == '?' || aSentence[i] == '!' || aSentence[i] == '\n') {
			endChar = aSentence[i];
			aSentence[i] = ' '; /* now everything is a word followed by a space */
			break;
		}
	}

	printf("Reversed sentence: ");

	for (i--; i >= 0; i--) { /* places i at the end of the last word, checks if we are at array[0] to end the loop, moves i backwards 1 place after a loop */
		while (aSentence[i] != ' ' && i > 0) { /* while i its not a space or array[0], go backwards */
			i--;
		}

		if (i == 0) { /* if i its array[0] place printer at array[0] */
			print = i;
		} else { /* if i its a space, place printer in the character following the space (a letter) */
			print = i + 1;
		}

		while (aSentence[print] != ' ') { /* print the word until i its a space */
			putchar(aSentence[print]);
			print++;
		}

		if (i == 0) { /* if i its array[0], print the end character (first word reversed) */
			putchar(endChar);
			putchar('\n');
		} else { /* if i its a space, print a space */
			putchar(' ');
		}
	}

return 0;
}
