/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt02, pag034, prog011, prgPrj007.c
 * -------------------------------------
 * write a program that asks the user to enter a $ amount and then shows how
 * to pay that amount using the smallest number of $20, $10, $5 & $1 bills
 */

#include <stdio.h>

int main(void) {
	int amount;

	printf("Enter amount:");
	scanf("%d", &amount);

	printf("%d\t $20 bills\n", amount / 20);
	amount = amount % 20;
	printf("%d\t $10 bills\n", amount / 10);
	amount = amount % 10;
	printf("%d\t  $5 bills\n", amount / 5);
	amount = amount % 5;
	printf("%d\t  $1 bills\n", amount / 1);

return 0;
}

