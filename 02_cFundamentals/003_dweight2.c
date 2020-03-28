/* c programming: a modern approach 2ed. chapt02, pag022, dweight2.c by OOQQ
 *
 * computes the dimensional weight of a box from input provided by the user
 */

#include <stdio.h>

int main(void) {
	int height, lenght, width, volume, weight;

	printf("enter height: ");
	scanf("%d", &height);
	printf("enter lenght: ");
	scanf("%d", &lenght);
	printf("enter width: ");
	scanf("%d", &width);
	volume = height * lenght * width;
	weight = (volume + 165) / 166;

	printf("volume (cubic inches): %d\n", volume);
	printf("dimensional weight (pounds): %d\n", weight);

return 0;
}
