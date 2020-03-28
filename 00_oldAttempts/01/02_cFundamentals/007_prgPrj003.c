/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt02, pag034, prog007, prgPrj003.c
 * -------------------------------------
 * modify the prog006 so that it prompts the user to enter the radius of the
 * sphere
 */

#include <stdio.h>

#define PI 3.14159265f

int main(void) {
	float radius;

	printf("Enter the radius of a sphere to calculate its volume:");
	scanf("%f", &radius);

	printf("The volume of the %.2f-meter radius sphere is: %.2fm3", radius, ((4.0f/3.0f) * PI ) * (radius * radius * radius));

return 0;
}

