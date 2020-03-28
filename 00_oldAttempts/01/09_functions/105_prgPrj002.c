/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt09, pag217, prog105, prgPrj002.c
 * -------------------------------------
 * modify prog034 so that it uses a function to compute the amount of income
 * tax, when passed an amount of taxable income, the function will return the
 * tax due
 */

#include <stdio.h>

float taxCalc(float income);

int main(void) {
	float income;

	printf("Enter the amount of taxable income: $");
	scanf("%f", &income);

	printf("tax due is $%.2f\n", taxCalc(income));

return 0;
}

float taxCalc(float income) {
	if (income < 750.0f) {
		return income * 0.01f;
	} else if (income >= 750.0f && income < 2250.0f) {
		return 7.50f + (income * 0.02f);
	}  else if (income >= 2250.0f && income < 3750.0f) {
		return 37.50f + (income * 0.03f);
	} else if (income >= 3750.0f && income < 5250.0f) {
		return 82.50f + (income * 0.04f);
	} else if (income >= 5250.0f && income < 9000.0f) {
		return 142.50f + (income * 0.05f);
	} else {
		return 230.0f + (income * 0.06f);
	}
}

