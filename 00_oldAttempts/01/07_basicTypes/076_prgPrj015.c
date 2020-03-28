/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt07, pag159, prog076, prgPrj015.c
 * -------------------------------------
 * write a program that computes the factorial of a positive integer:
 *
 * Enter a positive integer: 6
 * Factorial of 6: 720
 */

#include <stdio.h>

int main(void) {
  int i, factorial = 1, input;

  printf("Enter a number:");
  scanf("%d", &input);

  for (i = input; i > 1; i--) {
    factorial *= i;
  }

  printf("Factorial of %d is: %d\n", input, factorial);

return 0;
}

/* (a) Largest value of (short) input that correctly prints is:			7
 * (b) Largest value of (int) input that correctly prints is:			12
 * (c) Largest value of (long) input that correctly prints is:			12
 * (d) Largest value of (long long) input that correctly prints is:		12
 * (e) Largest value of (float) input that correctly prints is:			34
 * (f) Largest value of (double) input that correctly prints is:		170
 * (g) Largest value of (long float) input that correctly prints is:	1754
 */
