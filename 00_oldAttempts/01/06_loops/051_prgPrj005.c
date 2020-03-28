/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag123, prog051, prgPrj005.c
 * -------------------------------------
 * prog022 asked you to write a program that displays a two-digit number with
 * its digits reversed, generalize the program so that the number can have one,
 * two or more digits
 */

#include <stdio.h>

int main(void) {
	int num;

	printf("Enter a number:");
	scanf("%d", &num);

	if (num == 0) {
		printf("Zero is its own reversal.\n");

		return 0;
	} else {
		printf("The reversal is: ");
		
		while (num != 0) {
			printf("%d", num % 10);
			num /= 10;
		}

		printf("\n");
	}

return 0;
}

