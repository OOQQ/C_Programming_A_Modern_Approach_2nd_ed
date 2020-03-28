/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt03, pag051, prog020, prgPrj006.c
 * -------------------------------------
 *  modify the addfrac.c program so that the user enters both fractions at the
 *  same time, separated by a + sign
 */

#include <stdio.h>

int main(void) {
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter two fractions separated by a plus sign:\t");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	result_num = (num1 * denom2) + (num2 * denom1);

	result_denom = (denom1 * denom2);
	printf("\nThe sum is: %d/%d\n", result_num, result_denom);

return 0;
}
