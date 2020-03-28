/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag096, prog031, prgPrj002.c
 * -------------------------------------
 * write a program that asks the user for a 24-hour time, then displays the time
 * in 12-hour form
 */

#include <stdio.h>

int main(void) {
	int hours, minutes;

	printf("Enter a 24-hour time:");
	scanf("%d:%d", &hours, &minutes);

	printf("Equivalent 12-hour time: ");

	switch (hours) {
		case 13 :
			printf ("1");
			break;
		case 14 :
			printf ("2");
			break;
		case 15 :
			printf ("3");
			break;
		case 16 :
			printf ("4");
			break;
		case 17 :
			printf ("5");
			break;
		case 18 :
			printf ("6");
			break;
		case 19 :
			printf ("7");
			break;
		case 20 :
			printf ("8");
			break;
		case 21 :
			printf ("9");
			break;
		case 22 :
			printf ("10");
			break;
		case 23 :
			printf ("11");
			break;
		default : printf("%d", hours);
	}

	printf(":%d", minutes);

	printf("%s", hours < 12 ? "am" : "pm");

return 0;
}
