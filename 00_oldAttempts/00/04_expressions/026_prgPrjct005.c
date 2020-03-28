/*
C Programming: A modern approach 2ed.
026 | Pag 071 | Chapter 4 | Programming Project 005 | 026_prgPrjct005.c
by: OOQQ
=======================================
Rewrite the upc.c program of section 4.1 so that the user enters 11 digits at once, instead of entering one digit, then five, and then another five digits.
*/

#include <stdio.h>

int main(void)
{
  int a, b, c, d, e, f, g, h, i, j, k, control;

  printf("Enter the first 11 digits of a UPC:");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);

  control = (((((((a + c + e + g + i + k) * 3) + (b + d + f + h + j)) - 1) % 10) - 9) * -1);
/*
"subtract the remainder from 9" is the same as subtract 9 from the remainder and change its sign.
*/
  printf("Check digit: %d\n", control);

return 0;
}
