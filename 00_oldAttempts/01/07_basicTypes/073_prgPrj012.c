/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag158, prog073, prgPrj012.c
 * -------------------------------------
 * write a program that evaluates an expression
 *
 * Enter an expression: 1+2.5*3
 * Value of expression: 10.5
 */

#include <stdio.h>

int main(void) {
	char operand;
	float value, result;

	printf("Enter an expression:");

	scanf("%f", &result);
	operand = getchar();

	while (operand != '\n') {
		scanf("%f", &value);

		if (operand == '+') {
			result += value;
		} else if (operand == '-') {
			result -= value;
		} else if (operand == '*') {
			result *= value;
		} else {
			result /= value;
		}

		operand = getchar();
	}

	printf("Value of expression: %.2f\n", result);

return 0;
}
