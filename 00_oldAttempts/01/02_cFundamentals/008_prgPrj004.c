/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt02, pag034, prog008, prgPrj004.c
 * -------------------------------------
 * write a program that asks the user to enter a dollars-and-cents amount then
 * displays the amount with 5% tax added
 */

#include <stdio.h>

int main(void) {
	float value, percentage;

	printf("Enter an amount:");
	scanf("%f", &value);

	percentage = value * 0.05f;

	printf("Amount with tax added: $%.2f", value + percentage);

return 0;
}

