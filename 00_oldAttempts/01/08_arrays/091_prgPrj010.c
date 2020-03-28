/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag180, prog091, prgPrj010.c
 * -------------------------------------
 * modify prog037 so that the departure times are stored in an array and the
 * arrival times are stored in a second array
 */

#include <stdio.h>

int main(void) {
/* arrivals / departures converted to minutes */
	int aDepartures[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
	int aArrivals[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
/*  8:00am	10:16am */
/*  9:43am	11:52am */
/* 11:19am	 1:31pm */
/* 12:47pm	 3:00pm */
/*  2:00pm	 4:08pm */
/*  3:45pm	 5:55pm */
/*  7:00pm	 9:20pm */
/*  9:45pm	11:58pm */

	int enteredHours, enteredMinutes, currentTimeMins, i;

	printf("Enter a 24-hour time:");
	scanf("%d:%d", &enteredHours, &enteredMinutes);

	currentTimeMins = (enteredHours * 60) + enteredMinutes;

	for (i = 0; i < (sizeof(aDepartures) / sizeof(aDepartures[0])); i++) {
		if (currentTimeMins < aDepartures[i]) {
			printf("Closest departure time is %.2d:%.2d", (aDepartures[i] / 60), (aDepartures[i] % 60));
			printf("%s", currentTimeMins < 720 ? "am " : "pm ");
			printf("arriving at %.2d:%.2d", (aArrivals[i] / 60), (aArrivals[i] % 60));
			printf("%s", currentTimeMins < 720 ? "am\n" : "pm\n");
			break;
		} else if (currentTimeMins > aDepartures[7]) {
			printf("Closest departure time is %.2d:%.2d", (aDepartures[0] / 60), (aDepartures[0] % 60));
			printf("%s", currentTimeMins > 720 ? "am " : "pm ");
			printf("arriving at %.2d:%.2d", (aArrivals[0] / 60), (aArrivals[0] % 60));
			printf("%s", currentTimeMins > 720 ? "am\n" : "pm\n");
			break;
		}
	}

return 0;
}

