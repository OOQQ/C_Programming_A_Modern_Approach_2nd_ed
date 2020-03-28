/* c programming: a modern approach 2ed. chapt02, pag034, prgPrj003.c by OOQQ
 *
 * modify the prgPrj002 so that it prompts the user to enter
 * the radius of the sphere
 */

#include <stdio.h>

#define PI_CONSTANT 3.141592f
#define VOLUME_FORMULA ((4.0f / 3.0f) * PI_CONSTANT) * (radius * radius * radius)

int main(void) {
	float radius;

	printf("enter the sphere radius: ");
	scanf("%f", &radius);

	printf("sphere volume is: %.2f\n", VOLUME_FORMULA);

return 0;
}
