/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt04, pag071, prog025, prgPrj004.c
 * -------------------------------------
 * write a program that reads an integer entered by the user and displays it in
 * octal form (base 8), the output should be displayed using five digits even if
 * fewer digits are sufficient
 */

#include <stdio.h>

int main(void) {
	int num;

	printf("Enter a number between 0 and 32767:");
	scanf("%d", &num);

	printf("In octal, your number is: %.5o\n", num);

return 0;
}
