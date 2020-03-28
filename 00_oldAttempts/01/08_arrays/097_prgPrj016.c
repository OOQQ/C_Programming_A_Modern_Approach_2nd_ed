/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag181, prog097, prgPrj016.c
 * -------------------------------------
 * write a program that test whether two words are anagrams
 *
 * Enter first word: smartest
 * Enter second word: mattress
 *
 * Words are anagrams.
 */

#include <stdio.h>

#define MAXARRAY 128

int main(void) {
	char aFirstWord[MAXARRAY] = {0}, aSecondWord[MAXARRAY] = {0};
	int i, sum;

	printf("Enter first word:");
	scanf("%s", &aFirstWord);
	printf("Enter second word:");
	scanf("%s", &aSecondWord);

	for (i = 0; i < MAXARRAY; i++) {
		sum += aFirstWord[i];
	}

	for (i = 0; i < MAXARRAY; i++) {
		sum -= aSecondWord[i];
	}

	if (sum == 0) {
		printf("\nWords are anagrams.\n");
	} else {
		printf("\nWords are not anagrams.\n");
	}

return 0;
}
