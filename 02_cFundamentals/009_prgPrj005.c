/* c programming: a modern approach 2ed. chapt02, pag034, prgPrj005.c by OOQQ
 *
 * write a program that asks the user to enter a value for x then displays the
 * value of the following polynomial: 3x⁵+2x⁴-5x³-x²+7x-6
 */

#include <stdio.h>

#define POLYNOMIAL_OPERATION ((x * x * x * x * x) * 3) + ((x * x * x * x) * 2) - ((x * x * x) * 5 ) - (x * x) + (x * 7) - 6

int main(void) {
	int x;

	printf("enter x: ");
	scanf("%d", &x);

	printf("the value of the polynomial 3x⁵+2x⁴-5x³-x²+7x-6 is: %.d\n", POLYNOMIAL_OPERATION);

return 0;
}
