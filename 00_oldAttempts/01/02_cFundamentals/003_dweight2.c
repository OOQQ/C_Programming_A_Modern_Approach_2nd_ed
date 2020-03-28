/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt02, pag022, prog003, dweight2.c
 * -------------------------------------
 * an improved version of the dimensional weight program in which the user
 * enters the dimensions
 */

#include <stdio.h>

int main(void) {
	int height, lenght, width, volume, weight;

	printf("enter height:");
	scanf("%d", &height);
	printf("enter lenght:");
	scanf("%d", &lenght);
	printf("enter width:");
	scanf("%d", &width);

	volume = height * lenght * width;
	weight = (volume + 165) / 166;

	printf("dimensions: %d x %d x %d\n", height, lenght, width);
	printf("volume (cubic inches): %d\n", volume);
	printf("dimensional weight (pounds): %d\n", weight);

return 0;
}

