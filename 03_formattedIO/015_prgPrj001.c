/* c programming: a modern approach 2ed. chapt03, pag050, 015_prgPrj001.c by OOQQ
 *
 * write a program that accepts a date from the user in the form dd/mm/yyyy,
 * and then displays it in the form yyyymmdd
 */

#include <stdio.h>

int main(void) {
		int day, month, year;

		printf("Enter a date (mm/dd/yyyy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		printf("You entered the date %d%.2d%.2d", year, month, day);

return 0;
}
