/* c programming: a modern approach 2ed. chapt02, pag024, celsius.c by OOQQ
 *
 * the following program prompts the user to enter a Fahrenheit temperature;
 * it then prints the equivalent Celsius temperature
 */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius temperature equivalent: %.1fºC\n", celsius);

return 0;
}
