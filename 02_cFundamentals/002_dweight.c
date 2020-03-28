/* c programming: a modern approach 2ed. chapt02, pag020, dweight.c by OOQQ
 *
 * computes the dimensional weight of a "12 x "10 x "8 box
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
