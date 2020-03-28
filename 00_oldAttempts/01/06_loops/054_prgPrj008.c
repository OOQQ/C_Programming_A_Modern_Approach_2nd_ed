/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag123, prog054, prgPrj008.c
 * -------------------------------------
 * write a program that prints a one-month calendar, the user specifies the
 * number of days in the month and the day of the week on which the month
 * begins
 */

#include <stdio.h>

int main(void) {
	int i = 0, days, startingDay, number;

	printf("Enter number of days in month:");
	scanf("%d", &days);
	printf("Enter starting dayof the week (1=Mon, 7=Sun):");
	scanf("%d", &startingDay);

	printf("\n");

/* starting day spacer */
	for (number = 1; number < startingDay; number++) {
		printf("   ");
		i++;
	}

/* count up to days & prints new line at the seven day */
	for (i = 1; i <= days; i++) {
		printf("%3.1d", i);
		if (number % 7 == 0) {
			printf("\n");
		}
		number++;
	}

	printf("\n");

return 0;
}

