/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag180, prog092, prgPrj011.c
 * -------------------------------------
 * modify prog065 so that the program labels its outputs, store the phone number
 * in an array
 *
 * Enter phone number: 1-800-STAR-WARS
 * In numeric form: 1-800-7827-9277
 */

#include <stdio.h>
#include <ctype.h>

#define MAXARRAY 16

int main(void) {
	char aPhoneNumber[MAXARRAY];
	int i;

	printf("Enter phone number:");

	for (i = 0; i < MAXARRAY; i++) {
		aPhoneNumber[i] = toupper(getchar());
	}

	printf("In numeric form: ");

	for (i = 0; i < MAXARRAY; i++) {
		switch(aPhoneNumber[i]) {
			case '0':
				putchar('0');
					break;
			case '1':
				putchar('1');
					break;
			case '2':
				putchar('2');
					break;
			case '3':
				putchar('3');
					break;
			case '4':
				putchar('4');
					break;
			case '5':
				putchar('5');
					break;
			case '6':
				putchar('6');
					break;
			case '7':
				putchar('7');
					break;
			case '8':
				putchar('8');
					break;
			case '9':
				putchar('9');
					break;
			case '-':
				putchar('-');
					break;
			case 'A': case 'B': case 'C':
				putchar('2');
					break;
			case 'D': case 'E': case 'F':
				putchar('3');
					break;
			case 'G': case 'H': case 'I':
				putchar('4');
					break;
			case 'J': case 'K': case 'L':
				putchar('5');
					break;
			case 'M': case 'N': case 'O':
				putchar('6');
					break;
			case 'P': case 'Q': case 'R': case 'S':
				putchar('7');
					break;
			case 'T': case 'U': case 'V':
				putchar('8');
					break;
			case 'W': case 'X': case 'Y': case 'Z':
				putchar('9');
					break;
		}
	}

	putchar('\n');

return 0;
}
