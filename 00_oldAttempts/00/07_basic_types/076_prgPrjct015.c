/*
C Programming: A modern approach 2ed.
076 | Pag 159 | Chapter 7 | Programming Project 015 | 076_prgPrjct015.c
by: OOQQ
=======================================
Write a program that computes the factorial of a positive integer:

Enter a positive integer: 6
Factorial of 6: 720
*/

#include <stdio.h>

int main(void) {
  int i, f = 1, num;

  printf("Enter a number: ");
  scanf("%d", &num);

  for (i = 1; i <= num; i++) {
    f = (f * i);
  }

  printf("Factorial of %d is: %d", num, f);

return 0;
}
