/* c programming: a modern approach 2ed. chapt02, pag034, prgPrj004.c by OOQQ
 *
 * write a program that asks the user to enter a dollars-and-cents amount then
 * displays the amount with 5% tax added
 */

#include <stdio.h>

#define FIVE_PERCENT_TAX amount * 0.05f
#define TOTAL_AMOUNT amount + FIVE_PERCENT_TAX

int main(void) {
	float amount = 0.0f;

	printf("enter an amount: ");
	scanf("%f", &amount);

	printf("amount with 5 per cent tax added is: %.2f\n", TOTAL_AMOUNT);

return 0;
}
