/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag096, prog033, prgPrj004.c
 * -------------------------------------
 * write a program that asks the user to enter a wind speed (in knots), then
 * displays the the description following the Beaufort wind scale
 *
 * Speed	Description
 * < 1		Calm
 * 1-3		Light Air
 * 4-27		Breeze
 * 28-47	Gale
 * 48-63	Storm
 * +63		Hurricane
 */

#include <stdio.h>

int main(void) {
	int windSpeed;

	printf("Enter the wind speed: ");
	scanf("%d", &windSpeed);

	printf("Wind speed is ");

	if (windSpeed < 1) {
		printf("Calm\n");
	} else if (windSpeed >= 1 && windSpeed <= 3) {
		printf("Light Air\n");
	} else if (windSpeed >= 4 && windSpeed <= 27) {
		printf("Breeze\n");
	} else if (windSpeed >= 28 && windSpeed <= 47) {
		printf("Gale\n");
	} else if (windSpeed >= 48 && windSpeed <= 63) {
		printf("Storm\n");
	} else {
		printf("Hurricane\n");
	}

return 0;
}
