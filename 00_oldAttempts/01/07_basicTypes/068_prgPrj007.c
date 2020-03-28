/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag158, prog067, prgPrj006.c
 * -------------------------------------
 * modify prog020 so that the user may add, subtract, multiply or divide two
 * fractions (by entering either +, -, * or / between fractions)
 */

#include <stdio.h>

int main(void) {
	int num1, denom1, num2, denom2, operand, result_num, result_denom;

	printf("Enter two fractions separated by a sign:");
	scanf("%d/%d", &num1, &denom1);

	operand = getchar();

	scanf("%d/%d", &num2, &denom2);

	if (operand == '+') {
		result_num = (num1 * denom2) + (num2 * denom1);
		result_denom = (denom1 * denom2);
		printf("The addition is: %d/%d\n", result_num, result_denom);
	} else if (operand == '-') {
		result_num = (num1 * denom2) - (num2 * denom1);
		result_denom = (denom1 * denom2);
		printf("The substracion is: %d/%d\n", result_num, result_denom);
	} else if (operand == '*') {
		result_num = (num1 * num2);
		result_denom = (denom1 * denom2);
		printf("The multiplication is: %d/%d\n", result_num, result_denom);
	} else if (operand == '/') {
		result_num = (num1 * denom2);
		result_denom = (denom1 * num2);
y;
	} else {
		printf("Not a valid operand!\n");
	}

return 0;
}

