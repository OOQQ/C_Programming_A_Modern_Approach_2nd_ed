/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag122, prog047, prgPrj001.c
 * -------------------------------------
 * write a program that finds the largest in a series of numbers entered by the
 * user, the program must prompt the user to enter numbers one by one, when the
 * user enters 0 or a negative number, the program must display the largest
 * non-negative number entered
 */

#include <stdio.h>

int main(void) {
	float current, largest;

	do {
		printf("Enter a number:");
		scanf("%f", &current);
		if (current > largest) {
			largest = current;
		}
	} while (current > 0);

	printf("\nThe largest number entered was %.2f\n", largest);

return 0;
}

