/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag180, prog094, prgPrj013.c
 * -------------------------------------
 * modify prog072 so that the program labels its outputs, store the last name in
 * an array of chars
 *
 * Enter a first and a last name: Emmet Brown
 * You entered the name: Brown, E.
 */

#include <stdio.h>

#define MAXARRAY 32

int main(void) {
	char initial, aSurname[MAXARRAY];

	printf("Enter first and last name:");

	initial = getchar();

	while (getchar() != ' ') { /* skips rest of the name */
		;
	}

	scanf("%s", &aSurname);

	printf("%s, %c.\n", aSurname, initial);

return 0;
}
