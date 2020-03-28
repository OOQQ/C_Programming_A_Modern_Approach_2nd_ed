/*
C Programming: A modern approach 2ed.
027 | Pag 071 | Chapter 4 | Programming Project 006 | 027_prgPrjct006.c
by: OOQQ
=======================================
Your job is to modify the upc.c program of section 4.1 so that it calculates the check digit for an EAN. The user will enter the first 12 digits of the EAN as a single number.
*/

#include <stdio.h>

int main(void)
{
  int a, b, c, d, e, f, g, h, i, j, k, l, control;

  printf("Enter the first 12 digits of an EAN:");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

  control = ((((a + c + e + g + i + k) + ((b + d + f + h + j + l) * 3)) - 1) % 10);

  printf("Check digit: %d\n", 9 - control);

return 0;
}
