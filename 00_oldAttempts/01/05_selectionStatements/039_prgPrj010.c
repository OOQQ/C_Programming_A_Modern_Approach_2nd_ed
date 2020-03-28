/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag097 prog039, prgPrj010.c
 * -------------------------------------
 * using the switch statement, write a program that converts a numerical grade
 * into a letter grade:
 *
 * enter numerical grade: 84
 * letter grade: B
 *
 * A = 100-90, B = 89-80, C = 79-70, D = 69-60, F = 59-0, print an error if the
 * input is larger than 100 or smaller than 0
 */

#include <stdio.h>

int main(void) {

	int input;

	printf("Enter numerical grade:");
	scanf("%d", &input);

	printf("Letter grade equivalent: ");

	if (input > 100 || input < 0) {
		printf("Error\n");
	} else {
		switch (input) {
			case 100: case 99: case 98: case 97: case 96: case 95: case 94:
			case 93: case 92: case 91: case 90:
				printf("A\n");
					break;
			case 89: case 88: case 87: case 86: case 85: case 84: case 83:
			case 82: case 81: case 80:
				printf("B\n");
					break;
			case 79: case 78: case 77: case 76: case 75: case 74: case 73:
			case 72: case 71: case 70:
				printf("C\n");
					break;
			case 69: case 68: case 67: case 66: case 65: case 64: case 63:
			case 62: case 61: case 60:
				printf("D\n");
					break;
			default:
				printf("F\n");
					break;
		}
	}

return 0;
}

