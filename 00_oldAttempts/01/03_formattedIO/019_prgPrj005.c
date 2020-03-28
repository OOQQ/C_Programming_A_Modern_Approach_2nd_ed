/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt03, pag050, prog019, prgPrj005.c
 * -------------------------------------
 * write a program that asks the user to enter the numbers from 1 to 16
 * (in any order) and then displays the numbers in a 4 by 4 arrangement,
 * followed by the sums of the rows, columns and diagonals
 */

#include <stdio.h>

int main(void) {
	int num01, num02, num03, num04, num05, num06, num07, num08, num09, num10,
		num11, num12, num13, num14, num15, num16;

	printf("Enter the numbers from 1 to 16 in any order:");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num01, &num02,
	&num03, &num04, &num05, &num06, &num07, &num08, &num09, &num10, &num11,
	&num12, &num13, &num14, &num15, &num16);

	printf("%.2d %.2d %.2d %.2d\n%.2d %.2d %.2d %.2d\n\
%.2d %.2d %.2d %.2d\n%.2d %.2d %.2d %.2d\n",
			num01, num02, num03, num04,
			num05, num06, num07, num08,
			num09, num10, num11, num12,
			num13, num14, num15, num16);

	printf("\nRow sums: \t%d %d %d %d\n", (num01 + num02 + num03 + num04),
			(num05 + num06 + num07 + num08), (num09 + num10 + num11 + num12),
			(num13 + num14 + num15 + num16));
	printf("Col sums: \t%d %d %d %d\n", (num01 + num05 + num09 + num13),
			(num02 + num06 + num10 + num14), (num03 + num07 + num11 + num15),
			(num04 + num08 + num12 + num16));
	printf("Diagonal sums: \t%d %d\n", (num01 + num06 + num11 + num16),
			(num04 + num07 + num10 + num13));

return 0;
}

