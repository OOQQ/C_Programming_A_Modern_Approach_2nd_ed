/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt11, pag256, prog125, prgPrj001.c
 * -------------------------------------
 * modify programming project 7 from chapter 2, so that includes the following
 * function:
 * void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
 */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
	int dollars, *twenties, *tens, *fives, *ones;

	printf("Enter amount:");
	scanf("%d", &dollars);

	void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
	printf("%d\t $20 bills\n", dollars / 20);
	dollars = dollars % 20;
	printf("%d\t $10 bills\n", dollars / 10);
	dollars = dollars % 10;
	printf("%d\t $5 bills\n", dollars / 5);
	dollars = dollars % 5;
	printf("%d\t $1 bills\n", dollars / 1);

return;
}

