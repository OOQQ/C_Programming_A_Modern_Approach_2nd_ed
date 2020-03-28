/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt03, pag050, prog018, prgPrj004.c
 * -------------------------------------
 * write a program that prompts the user to enter a telephone number in the form
 * (xxx)xxx-xxxx and then displays the number in the form xxx.xxx.xxx
 */

#include <stdio.h>

int main(void) {
	int first, second, third;

	printf("Enter phone number [(xxx) xxx-xxxx]:");
	scanf("(%d) %d-%d", &first, &second, &third);

	printf("You entered %d.%d.%d\n", first, second, third);

return 0;
}
