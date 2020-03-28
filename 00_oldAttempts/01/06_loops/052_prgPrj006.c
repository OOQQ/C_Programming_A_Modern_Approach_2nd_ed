/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag123, prog052, prgPrj006.c
 * -------------------------------------
 * write a program that prompts the user to enter a number, then prints all
 * even squares between 1 and the number
 */

#include <stdio.h>

int main(void) {
	int num, square = 1;

	printf("Enter a number:");
	scanf("%d", &num);

	while (square * square <= num) {
		if ((square * square) % 2 == 0) {
			printf("%d\n", square * square);
		}
		square++;
	}

return 0;
}

