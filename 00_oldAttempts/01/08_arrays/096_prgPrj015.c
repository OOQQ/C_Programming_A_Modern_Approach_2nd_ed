/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag181, prog096, prgPrj015.c
 * -------------------------------------
 * write a Caesar cipher, characters other than letters are left unchanged,
 * lower and uppercase remains intact
 *
 * Enter a message to be encrypted: Go ahead, make my day.
 * Enter shift amount (1-25): 3
 *
 * Encrypted message: Jr dkhdg, pdhdg pb gdb.
 */

#include <stdio.h>

#define MAXARRAY 128

int main(void) {
	int i, shift;
	char aMessage[MAXARRAY] = {0};

	printf("Enter a message to be encrypted:");
	for (i = 0; i < MAXARRAY; i++) {
		aMessage[i] = getchar();
		if (aMessage[i] == '\n') {
			break;
		}
	}

	printf("Enter shift amount (1-25):");
	scanf("%d", &shift);

	printf("\nEncrypted message: ");
	for (i = 0; i < MAXARRAY; i++) {
		if (aMessage[i] == '\n') {
			break;
		}
		if ((aMessage[i] < 'A' || aMessage[i] > 'Z') && (aMessage[i] < 'a' || aMessage[i] > 'z')) { /* preserves punctuation */
			putchar(aMessage[i]);
		} else if (aMessage[i] >= 'a' || aMessage[i] <= 'z' && (aMessage[i] + shift) > 'z') { /* wrap for minus */
			putchar(((((aMessage[i] - 'a') + shift) % 26) + 'a'));
		} else { /* wrap for mayus */
			putchar(((((aMessage[i] - 'A') + shift) % 26) + 'A'));
		}
	}

return 0;
}
