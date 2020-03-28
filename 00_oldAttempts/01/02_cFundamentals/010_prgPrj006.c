/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt02, pag034, prog010, prgPrj006.c
 * -------------------------------------
 * modify program 005 so that the polynomial is evaluated using the formula:
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 */

#include <stdio.h>

int main(void) {
	int x;

	printf("Enter a value for x:");
	scanf("%d", &x);

	printf("The value of the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 where x is %d, is: %d.\n", x,
	((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

return 0;
}

