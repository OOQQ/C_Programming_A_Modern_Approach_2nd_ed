/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag159, prog075, prgPrj014.c
 * -------------------------------------
 * write a program that uses Newton's method to compute the square root of a
 * positive floting-point number:
 *
 * Enter a positive number: 3
 * Square root: 1.73205
 *
 * Newton's method requires an initial guess y for the square root of x
 * (let be y=1), successive guesses are found by computing
 * the average of y and x/y.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
	double input, guess = 1.0f, result;

	printf("Enter a positive number:");
	scanf("%lf", &input);

	for (;;) {
		result = ((guess + (input / guess)) / 2.0f);
		if (fabs(guess - result) < (0.00001f * result)) {
			break;
		} else {
		guess = result;
		}
	}

	printf("Square root: %f\n", result);

return 0;
}
