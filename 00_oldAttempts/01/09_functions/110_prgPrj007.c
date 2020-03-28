/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt09, pag217, prog110, prgPrj007.c
 * -------------------------------------
 * the power function of section 9.6 can be made faster
 */

#include <stdio.h>

int power(int n, int x);

int main(void) {
	int n, x;

	printf("Enter the base number");
	scanf("%d", &n);
	printf("Enter the exponent to power to");
	scanf("%d", &x);

	printf("\nResult: %d\n", power(n, x));

return 0;
}

int power(int n, int x) {
	int i = 0;

	if (x == 0) {
		return 1;
	} else if (x % 2 == 0) {
		i = power(n, x / 2);
		return i * i;
	} else {
		return n * power(n, x - 1);
	}
}

