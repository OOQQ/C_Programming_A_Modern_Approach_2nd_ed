/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag158, prog066, prgPrj005.c
 * -------------------------------------
 * write a program that prints the values of sizeof int, short, long, float,
 * double, and long double
 */

#include <stdio.h>

int main(void) {
	char chr;
	short shrt;
	int i;
	long lng;
	float flt;
	double dbl;
	long double lngdbl;

	printf("sizeof char: \t\t%d\n", sizeof(chr));
	printf("sizeof short: \t\t%d\n", sizeof(shrt));
	printf("sizeof int: \t\t%d\n", sizeof(i));
	printf("sizeof long: \t\t%d\n", sizeof(lng));
	printf("\n");
	printf("sizeof float: \t\t%d\n", sizeof(flt));
	printf("sizeof double: \t\t%d\n", sizeof(dbl));
	printf("sizeof long double: \t%d\n", sizeof(lngdbl));

return 0;
}
