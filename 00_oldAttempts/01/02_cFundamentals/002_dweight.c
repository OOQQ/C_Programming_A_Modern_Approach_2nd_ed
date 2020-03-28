/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt02, pag020, prog002, dweight.c
 * -------------------------------------
 * write a program that calculates the dimensional weight of a particular box
 * that's 12" x 10" x 8"
 */

#include <stdio.h>

int main(void) {
	int height, lenght, width, volume, weight;

	height = 8;
	lenght = 10;
	width = 12;

	volume = height * lenght * width;
	weight = (volume + 165) / 166;

	printf("dimensions: %d x %d x %d\n", height, lenght, width);
	printf("volume (cubic inches): %d\n", volume);
	printf("dimensional weight (pounds): %d\n", weight);

return 0;
}

