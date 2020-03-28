/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt02, pag034, prog009, prgPrj005.c
 * -------------------------------------
 * write a program that asks the user to enter a value for x then displays the
 * value of the following polynomial: 3x⁵+2x⁴-5x³-x²+7x-6
 */

#include <stdio.h>

int main(void) {
	int x;

	printf("Enter a value for x");
	scanf("%d", &x);

	printf("The value of the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 where x is %d, is %d.\n", x,
	((x * x * x * x * x) * 3) +
	((x * x * x * x) * 2) -
	((x * x * x) * 5) -
	(x * x) +
	(x * 7) -
	6);

return 0;
}

