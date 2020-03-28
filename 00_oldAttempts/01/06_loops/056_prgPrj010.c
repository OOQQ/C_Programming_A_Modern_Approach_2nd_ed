/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag124, prog056, prgPrj010.c
 * -------------------------------------
 * prog038 asked for a program that calculates which of two dates comes earlier
 * on the calendar, generalize the program so that the user may enter any number
 * of dates, the user will enter 0/0/0 to end the program
 */

#include <stdio.h>

int main(void) {
	int daysEntered = 1, monthsEntered, yearsEntered,
	daysEarlier = 9001, monthsEarlier = 9001, yearsEarlier = 9001, earliestDate = 9001;

	while (daysEntered) {
		printf("Enter a date (dd/mm/yy):");
		scanf("%2d/%2d/%2d", &daysEntered, &monthsEntered, &yearsEntered);

		if (daysEntered == 0)  {
			break;
		}

		if (daysEntered <= daysEarlier && monthsEntered <= monthsEarlier && yearsEntered <= yearsEarlier) {
			yearsEarlier = yearsEntered;
			monthsEarlier = monthsEntered;
			daysEarlier = daysEntered;
		}
	}

	printf("\n%.2d/%.2d/%.2d", daysEarlier, monthsEarlier, yearsEarlier);
	printf(" is the earliest date\n");

return 0;
}

