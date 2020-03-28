/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt02, pag034, prog006, prgPrj002.c
 * -------------------------------------
 * write a program that computes the volume of a sphere with a 10m radius,
 * using the formula 4/3p·r³
 */

#include <stdio.h>

#define PI 3.14159265f
#define RADIUS 10

int main(void) {
	printf("The volume of a 10-meter radius sphere is: %.2fm3", ((4.0f/3.0f) * PI) * (RADIUS * RADIUS * RADIUS));

return 0;
}

