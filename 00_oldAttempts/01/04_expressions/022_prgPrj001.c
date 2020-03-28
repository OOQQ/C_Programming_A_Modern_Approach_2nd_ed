/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt04, pag071, prog022, prgPrj001.c
 * -------------------------------------
 * write a program that asks the user to enter a two-digit number, then prints
 * the number with its digits reversed, read the number with %d
 */

#include <stdio.h>

int main(void) {
	int num;

	printf("Enter a two-digit number:");
	scanf("%d", &num);

	printf("The reversal is: %d%d\n", num % 10, num / 10);

return 0;
}
