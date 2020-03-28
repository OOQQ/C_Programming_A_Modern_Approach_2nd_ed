/* c programming: a modern approach 2ed. chapt02, pag034, prgPrj007.c by OOQQ
 *
 * write a program that asks the user to enter a $ amount and then shows how
 * to pay that amount using the smallest number of $20, $10, $5 & $1 bills
 */

#include <stdio.h>

int main(void) {
	int amount;

	printf("enter dollar amount to pay: ");
	scanf("%d", &amount);

	printf("\n");
	printf("amount of 20S bills: %d\n", amount / 20);
	amount %= 20;
	printf("amount of 10S bills: %d\n", amount / 10);
	amount %= 10;
	printf("amount of 5S bills: %d\n", amount / 5);
	amount %= 5;
	printf("amount of 1S bills: %d\n", amount / 1);

return 0;
}
