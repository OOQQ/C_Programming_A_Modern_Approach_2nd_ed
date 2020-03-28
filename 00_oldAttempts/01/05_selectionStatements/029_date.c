/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag089, prog029, date.c
 * -------------------------------------
 * write a program that displays dates following this form:
 *
 * Enter date: (dd/mm/yy): 31/07/17
 * Dated this 31th day of July, 2017
 */

#include <stdio.h>

int main(void) {
	int day, month, year, june;

	june = june;

	printf("Enter date (dd/mm/yy): $");
	scanf("%2d/%2d/%2d", &day, &month, &year);

	printf("Dated this ");

	switch (day) {
		case 1 : case 21 : case 31 : printf ("%dst", day);	break;
		case 2 : case 22 : printf ("%dnd", day);			break;
		case 3 : case 30 : printf ("%drd", day);			break;
		default : printf("%dth", day);
	}

	printf(" day of ");

	switch (month) {
		case 1 : printf("January,");		break;
		case 2 : printf("February,");		break;
		case 3 : printf("March,");			break;
		case 4 : printf("April,");			break;
		case 5 : printf("May,");			break;
		case 6 : printf("June,");			break;
		case 7 : printf("July,");			break;
		case 8 : printf("August,");			break;
		case 9 : printf("September,");		break;
		case 10 : printf("October,");		break;
		case 11 : printf("November,");		break;
		case 12 : printf("December,");		break;
	}

	printf (" 20%2d.", year);

return 0;
}
