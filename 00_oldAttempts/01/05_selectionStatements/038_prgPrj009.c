/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag097 prog038, prgPrj009.c
 * -------------------------------------
 * write a program that prompts the user to enter two dates and them indicates
 * which date comes earlier on the calendat:
 *
 * enter first date: (dd/mm/yy): 3/6/08
 * enter first date: (dd/mm/yy): 5/17/07
 * 5/17/07 is earlier than 3/6/08
 */

#include <stdio.h>

int main(void) {

	int days1, months1, years1, days2, months2, years2, firstDateToDays, secndDateToDays;

	printf("Enter first date (dd/mm/yy):");
	scanf("%d/%d/%d", &days1, &months1, &years1);
	printf("Enter secnd date (dd/mm/yy):");
	scanf("%d/%d/%d", &days2, &months2, &years2);

	firstDateToDays = (days1) + (months1 * 30) + (years1 * 365);
	secndDateToDays = (days2) + (months2 * 30) + (years2 * 365);

	printf("\n");

	if (firstDateToDays == secndDateToDays) {
		printf("Dates are the same.\n");
	} else {
		firstDateToDays < secndDateToDays ? printf("%.2d/%.2d/%.2d", days1, months1, years1) : printf("%.2d/%.2d/%.2d", days2, months2, years2);
		printf(" is earlier than ");
		firstDateToDays > secndDateToDays ? printf("%.2d/%.2d/%.2d\n", days1, months1, years1) : printf("%.2d/%.2d/%.2d\n", days2, months2, years2);
	}

return 0;
}
