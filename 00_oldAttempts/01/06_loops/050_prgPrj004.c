/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt06, pag123, prog050, prgPrj004.c
 * -------------------------------------
 * add a loop to the broker.c program so that the user can enter more than one
 * trade and the program will calculate the commission on each, the program end
 * when the user enters 0
 */

#include <stdio.h>

int main(void) {
	float amount, commission;

	do {
		printf("Enter value of the trade:");
		scanf("%f", &amount);

		if (amount < 39.0f) {
			printf("Minimum amount not met.\n");
			break;
		} else if (amount <= 2499.9f) {
			commission = 30.0f + .017f * amount;
		} else if (amount >= 2500.0f && amount <= 6499.9f) {
			commission = 56.0f + .0066f * amount;
		} else if (amount >= 6500.0f && amount <= 19999.9f) {
			commission = 76.0f + .0034f * amount;
		} else if (amount >= 20000.0f && amount <= 49999.9f) {
			commission = 100.0f + .0022f * amount;
		} else if (amount >= 50000.0f && amount <= 499999.9f) {
			commission = 155.0f + .0011f * amount;
		} else {
			commission = 255.0f + .0009f * amount;
		}
		printf("Commission: $%.2f\n\n", commission);
	} while (amount != 0);

return 0;
}

