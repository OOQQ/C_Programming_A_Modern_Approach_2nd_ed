/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag096, prog032, prgPrj003.c
 * -------------------------------------
 * modify the broker.c program by making both of the following changes:
 * a) ask the user to enter the number of shares and the price per share,
 * instead of the total amount of the trade.
 * b) add statements that compute the commission charged by a rival broker
 * ($33 plus 3c per share for fewer than 2000 shares; $33 plus 2c per share for
 * 2000 shares or more).
 * display the rival's commision as well as the commission charged by the
 * original broker
 */

#include <stdio.h>

int main(void) {
	int number;
	float amount, commission;

	printf("Enter the number of shares: ");
	scanf("%f", &number);

	printf("Enter the price per share: $");
	scanf("%f", &amount);

	if (amount < 39.0f) {
		printf("\nMinimum amount not met.\n");
	} else if (amount <= 2499.9f) {
		commission = 30.0f + 0.017f * amount;
	} else if (amount >= 2500.0f && amount <= 6499.9f) {
		commission = 56.0f + 0.0066f * amount;
	} else if (amount >= 6500.0f && amount <= 19999.9f) {
		commission = 76.0f + 0.0034f * amount;
	} else if (amount >= 20000.0f && amount <= 49999.9f) {
		commission = 100.0f + 0.0022f * amount;
	} else if (amount >= 50000.0f && amount <= 499999.9f) {
		commission = 155.0f + 0.0011f * amount;
	} else {
		commission = 255.0f + 0.0009f * amount;
	}

	printf("\nCommission of original broker: \t$%.2f\n", commission);

	if (number < 2000.0f) {
		commission = 33.0f + 0.03f * amount;
	} else {
		commission = 33.0f + 0.02f * amount;
	}

	printf("Commission of rival broker: \t$%.2f\n", commission);

return 0;
}
