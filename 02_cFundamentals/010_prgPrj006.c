/* c programming: a modern approach 2ed. chapt02, pag034, prgPrj006.c by OOQQ
 *
 * modify prgPrj005 so that the polynomial is evaluated using the formula
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 */

#include <stdio.h>

#define POLYNOMIAL_OPERATION ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6

int main(void) {
	int x;

	printf("enter x: ");
	scanf("%d", &x);

	printf("the value of the polynomial ((((3x + 2)x - 5)x - 1)x + 7)x - 6 is: %.d\n", POLYNOMIAL_OPERATION);

return 0;
}
