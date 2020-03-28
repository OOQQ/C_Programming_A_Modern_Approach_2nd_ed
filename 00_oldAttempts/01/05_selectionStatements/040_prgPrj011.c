/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag097 prog040, prgPrj011.c
 * -------------------------------------
 * write a program that asks the user for a two-digit number, then prints the
 * english word for the number:
 *
 * enter a two-digit number: 45
 * you entered the number: forty-five
 */

#include <stdio.h>

int main(void) {

	int digit1, digit2;

	printf("Enter a two-digit number:");
	scanf("%1d%1d", &digit1,  &digit2);

	printf("You entered the number: ");

	switch (digit1) {
		case 9: printf("ninety");	break;
		case 8: printf("eighty");	break;
		case 7: printf("seventy");	break;
		case 6: printf("sixty");	break;
		case 5: printf("fifty");	break;
		case 4: printf("forty");	break;
		case 3: printf("thirty");	break;
		case 2: printf("twenty");	break;
	}

	if (digit1 > 1) {
		switch (digit2) {
			case 9: printf("-nine\n");	break;
			case 8: printf("-eight\n");	break;
			case 7: printf("-seven\n");	break;
			case 6: printf("-six\n");	break;
			case 5: printf("-five\n");	break;
			case 4: printf("-four\n");	break;
			case 3: printf("-three\n");	break;
			case 2: printf("-two\n");	break;
			case 1: printf("-one\n");	break;
			case 0: printf("\n");		break;
		}
	} else if (digit1 == 1) {
		switch (digit2) {
			case 9: printf("nineteen\n");	break;
			case 8: printf("eighteen\n");	break;
			case 7: printf("seventeen\n");	break;
			case 6: printf("sixteen\n");	break;
			case 5: printf("fiveteen\n");	break;
			case 4: printf("fourteen\n");	break;
			case 3: printf("thirteen\n");	break;
			case 2: printf("twelve\n");	break;
			case 1: printf("eleven\n");	break;
			case 0: printf("ten\n");	break;
		}
	} else {
		switch (digit2) {
			case 9: printf("nine\n");	break;
			case 8: printf("eight\n");	break;
			case 7: printf("seven\n");	break;
			case 6: printf("six\n");	break;
			case 5: printf("five\n");	break;
			case 4: printf("four\n");	break;
			case 3: printf("three\n");	break;
			case 2: printf("two\n");	break;
			case 1: printf("one\n");	break;
			case 0: printf("zero\n");	break;
		}
	}

return 0;
}

