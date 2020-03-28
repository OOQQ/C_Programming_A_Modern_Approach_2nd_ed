/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt04, pag071, prog023, prgPrj002.c
 * -------------------------------------
 * extend prog022 to handle three-digit numbers
 */

#include <stdio.h>

int main(void) {
	int num;

	printf("Enter a three-digit number:");
	scanf("%d", &num);

	printf("The reversal is: %d", num % 10);
	num /= 10;
	printf("%d", num % 10);
	num /= 10;
	printf("%d\n", num % 10);

return 0;
}
