/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag158, prog069, prgPrj008.c
 * -------------------------------------
 * modify prog037 so that the user enters a time using the 12-hour format, the
 * input will have the form hours:minutes followed by either A, P, AM or PM
 * (lower or uppercase), white space is allowed
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
	/* arrivals / departures converted to minutes */
	int
	departure1 = 480,	arrival1 = 616,		/*  8:00am	10:16am */
	departure2 = 583,	arrival2 = 712,		/*  9:43am	11:52am */
	departure3 = 679,	arrival3 = 811,		/* 11:19am	 1:31pm */
	departure4 = 767,	arrival4 = 900,		/* 12:47pm	 3:00pm */
	departure5 = 840,	arrival5 = 968,		/*  2:00pm	 4:08pm */
	departure6 = 945,	arrival6 = 1075,	/*  3:45pm	 5:55pm */
	departure7 = 1140,	arrival7 = 1280,	/*  7:00pm	 9:20pm */
	departure8 = 1305,	arrival8 = 1438;	/*  9:45pm	11:58pm */

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

	if (currentTimeMins > departure8 || currentTimeMins < departure1) {
		printf("Closest departure time is %.2d:%.2d", (departure1 / 60), (departure1 % 60));
		currentTimeMins > 720 ? printf("pm ") : printf("am ");
		printf("arriving at %.2d:%.2d", (arrival1 / 60), (arrival1 % 60));
		currentTimeMins > 720 ? printf("pm\n") : printf("am\n");
	} else if (currentTimeMins < departure2) {
		printf("Closest departure time is %.2d:%.2d", (departure2 / 60), (departure2 % 60));
		currentTimeMins > 720 ? printf("pm ") : printf("am ");
		printf("arriving at %.2d:%.2d", (arrival2 / 60), (arrival2 % 60));
		currentTimeMins > 720 ? printf("pm\n") : printf("am\n");
	} else if (currentTimeMins < departure3) {
		printf("Closest departure time is %.2d:%.2d", (departure3 / 60), (departure3 % 60));
		currentTimeMins > 720 ? printf("pm ") : printf("am ");
		printf("arriving at %.2d:%.2d", (arrival3 / 60), (arrival3 % 60));
		currentTimeMins > 720 ? printf("pm\n") : printf("am\n");
	} else if (currentTimeMins < departure4) {
		printf("Closest departure time is %.2d:%.2d", (departure4 / 60), (departure4 % 60));
		currentTimeMins > 720 ? printf("pm ") : printf("am ");
		printf("arriving at %.2d:%.2d", (arrival4 / 60), (arrival4 % 60));
		currentTimeMins > 720 ? printf("pm\n") : printf("am\n");
	} else if (currentTimeMins < departure5) {
		printf("Closest departure time is %.2d:%.2d", (departure5 / 60), (departure5 % 60));
		currentTimeMins > 720 ? printf("pm ") : printf("am ");
		printf("arriving at %.2d:%.2d", (arrival5 / 60), (arrival5 % 60));
		currentTimeMins > 720 ? printf("pm\n") : printf("am\n");
	} else if (currentTimeMins < departure6) {
		printf("Closest departure time is %.2d:%.2d", (departure6 / 60), (departure6 % 60));
		currentTimeMins > 720 ? printf("pm ") : printf("am ");
		printf("arriving at %.2d:%.2d", (arrival6 / 60), (arrival6 % 60));
		currentTimeMins > 720 ? printf("pm\n") : printf("am\n");
	} else if (currentTimeMins < departure7) {
		printf("Closest departure time is %.2d:%.2d", (departure7 / 60), (departure7 % 60));
		currentTimeMins > 720 ? printf("pm ") : printf("am ");
		printf("arriving at %.2d:%.2d", (arrival7 / 60), (arrival7 % 60));
		currentTimeMins > 720 ? printf("pm\n") : printf("am\n");
	} else {
		printf("Closest departure time is %.2d:%.2d", (departure8 / 60), (departure8 % 60));
		currentTimeMins > 720 ? printf("pm ") : printf("am ");
		printf("arriving at %.2d:%.2d", (arrival8 / 60), (arrival8 % 60));
		currentTimeMins > 720 ? printf("pm\n") : printf("am\n");
	}

return 0;
}
