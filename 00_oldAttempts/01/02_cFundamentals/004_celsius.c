/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt02, pag024, prog004, celsius.c
 * -------------------------------------
 * the following program prompts the user to enter a Fahrenheit temperature; it
 * then prints the equivalent Celsius temperature
 */

#include <stdio.h>

#define CONSTANT 32
#define OPERATION (5.0f / 9.0f)

int main(void) {
	float input, result;

	printf("enter Fahrenheith temperature:");
	scanf("%f", &input);

	result = (input - CONSTANT) * OPERATION;

	printf("temperature in Celsius is: %.1fºC\n", result);

return 0;
}

