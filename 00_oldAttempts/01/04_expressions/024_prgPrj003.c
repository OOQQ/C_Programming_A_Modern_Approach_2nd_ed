/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt04, pag071, prog024, prgPrj003.c
 * -------------------------------------
 * rewrite prog023 so that it prints the reverse of a three-digit number without
 * using arithmetic to split the number into digits
 */

#include <stdio.h>

int main(void) {
	int frstDig, scndDig, thrdDig;

	printf("Enter a three-digit number:");
	scanf("%1d%1d%1d", &frstDig, &scndDig, &thrdDig);

	printf("The reversal is: %d%d%d\n", thrdDig, scndDig, frstDig);

return 0;
}
