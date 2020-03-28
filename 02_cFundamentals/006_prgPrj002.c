/* c programming: a modern approach 2ed. chapt02, pag034, prgPrj002.c by OOQQ
 *
 * write a program that computes the volume of a sphere
 * with a 10 meter radius using the formula 4/3p·r³
 */

#include <stdio.h>

#define PI_CONSTANT 3.141592f
#define VOLUME_FORMULA ((4.0f / 3.0f) * PI_CONSTANT) * (10 * 10 * 10)

int main(void) {
	printf("the volume of a 10 meter radius sphere is: %.2f\n", VOLUME_FORMULA);

return 0;
}
