/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt09, pag217, prog107, prgPrj004.c
 * -------------------------------------
 * modify prog097 so that includes:
 *
 * void read_word(int_counts[26]);
 * bool equal_array(int_counts[26], int counts2[26]);
 */

#include <stdio.h>

#define MAXARRAY 26

void read_word(char a[]);
int equal_array(char aFirstWord[MAXARRAY], char aSecondWord[MAXARRAY]);

int main(void) {
	char aFirstWord[MAXARRAY] = {0}, aSecondWord[MAXARRAY] = {0};

	read_word(aFirstWord);
	read_word(aSecondWord);

	if (equal_array(aFirstWord, aSecondWord) == 0) {
		printf("\nWords are anagrams.\n");
	} else {
		printf("\nWords are not anagrams.\n");
	}

return 0;
}

void read_word(char a[]) {
	printf("Enter word:");
	scanf("%s", &a[0]);

return;
}

int equal_array(char aFirstWord[MAXARRAY], char aSecondWord[MAXARRAY]) {
	int i, sum = 0;

	for (i = 0; i < MAXARRAY; i++) {
		sum += aFirstWord[i];
	}

	for (i = 0; i < MAXARRAY; i++) {
		sum -= aSecondWord[i];
	}

return sum;
}

