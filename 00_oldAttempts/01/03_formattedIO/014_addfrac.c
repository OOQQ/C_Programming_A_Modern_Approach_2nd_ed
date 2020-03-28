/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt03, pag046, prog014, addfrac.c
 * -------------------------------------
 * the following program adds two fractions
 */

#include <stdio.h>

int main(void) {
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter first fraction:\t");
	scanf("%d/%d", &num1, &denom1);

	printf("Enter second fraction:\t");
	scanf("%d/%d", &num2, &denom2);

	result_num = (num1 * denom2) + (num2 * denom1);

	result_denom = (denom1 * denom2);
	printf("\nThe sum is:\t\t  %d/%d\n", result_num, result_denom);

return 0;
}
