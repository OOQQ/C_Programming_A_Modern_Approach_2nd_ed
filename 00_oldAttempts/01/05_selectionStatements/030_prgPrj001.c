/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag095, prog030, prgPrj001.c
 * -------------------------------------
 * write a program that calculates how many digits a number contains (assuming
 * max length of 4 digits)
 */

#include <stdio.h>

int main(void) {
	int num;

	printf("Enter a number:");
	scanf("%d", &num);

	if (num < 10) {
		printf("The number %d has 1 digit\n", num);
	} else if (num >= 10 && num < 100) {
		printf("The number %d has 2 digits\n", num);
	} else if (num >= 100 && num < 999) {
		printf("The number %d has 3 digits\n", num);
	} else {
		printf("The number %d has 4 digits\n", num);
	}

return 0;
}
