/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt04, pag071, prog027, prgPrj006.c
 * -------------------------------------
 * your job is to modify the upc.c program so that it calculates the check digit
 * for an European Article Number, the user will enter the first 12 digits of
 * the EAN as a single number
 */

#include <stdio.h>

int main(void) {
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, first_sum, second_sum, total;

	printf("Enter the 12 digits of an EAN:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

	first_sum = i2 + i4 + i6 + i8 + i10 + i12;
	second_sum = i1 + i3 + i5 + i7 + i9 + i11;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

return 0;
}
