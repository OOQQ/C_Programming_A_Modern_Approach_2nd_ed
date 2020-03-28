 /*
C Programming: A modern approach 2ed.
075 | Pag 159 | Chapter 7 | Programming Project 014 | 075_prgPrjct014.c
by: OOQQ
=======================================
Write a program that uses Newton's method to compute the square root of a positive floting-point number:

Enter a positive number: 3
Square root: 1.73205

Newton's method requires an initial guess y for the square root of x (let be y=1). Successive guesses are found by computing the average of y and x/y.
*/

#include <stdio.h>

int main(void) {
  float input;
  float guess = 1.0f;
  float result;
  int i;

  printf("Enter a positive number:");
  scanf("%f", &input);

  for (i = 0; i < 5; i++) {
    result = (input / guess);
    guess = (result + guess) / 2.0f;
  }

  printf("Square root: %f\n", result);

return 0;
}
