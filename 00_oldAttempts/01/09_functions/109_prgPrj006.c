/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt09, pag217, prog109, prgPrj006.c
 * -------------------------------------
 * modify prog009 to use a function that computes the value of the following
 * polynomial: 3x⁵+2x⁴-5x³-x²+7x-6
 */

#include <stdio.h>

int calcPoly(int x);

int main(void) {
	int x;

	printf("Enter a value for x");
	scanf("%d", &x);

	printf("The value of the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 where x is %d, is %d.\n", x, calcPoly(x));

return 0;
}

int calcPoly(int x) {
return  ((x * x * x * x * x) * 3) +
		((x * x * x * x) * 2) -
		((x * x * x) * 5) -
		(x * x) +
		(x * 7) -
		6;
}

