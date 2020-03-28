/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt03, pag050, prog015, prgPrj001.c
 * -------------------------------------
 * write a program that accepts a date from the user in the form dd/mm/yyyy,
 * and then displays it in the form yyyymmdd
 */

#include <stdio.h>

int main(void) {
	int day, month, year;

	printf("Enter a date (dd/mm/yyyy):");
	scanf("%d/%d/%d", &day, &month, &year);

	printf("You entered the date: %d%d%d\n", year, month, day);

return 0;
}
