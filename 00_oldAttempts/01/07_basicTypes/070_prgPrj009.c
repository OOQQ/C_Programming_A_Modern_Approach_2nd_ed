/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag158, prog070, prgPrj009.c
 * -------------------------------------
 * write a program that asks the user for a 12-hour time, then displays the time
 * in a 24-hour format
 *
 * Enter a 12-hour time: 9:11pm
 * Equivalent 24-hour time: 21:11
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
	int enteredHours, enteredMinutes, currentTimeMins;
	char meridian;

	printf("Enter a 12-hour time:");
	scanf("%d:%d", &enteredHours, &enteredMinutes);

	scanf(" %c", &meridian);

	meridian = toupper(meridian);

	currentTimeMins = (enteredHours * 60) + enteredMinutes;

	if (meridian == 'P') {
		currentTimeMins += 720;
	}

	printf("Equivalent 24-hour time: %.2d:%.2d\n", (currentTimeMins / 60), (currentTimeMins % 60));

return 0;
}
