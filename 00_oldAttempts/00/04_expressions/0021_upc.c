/*
C Programming: A modern approach 2ed.
021 | Pag 057 | Chapter 4 | Computing a UPC Check Digit | 012_upc.c
by: OOQQ
=======================================
Computes a Universal Product Code check digit
*/

#include <stdio.h>

int main(void)
{
  int a, b, c, d, e, f, g, h, i, j, k, control;

  printf("Enter the first (single) digit:");
  scanf("%1d", &a);

  printf("Enter first group of five digits:");
  scanf("%1d%1d%1d%1d%1d", &b, &c, &d, &e, &f);

  printf("Enter second group of five digits:");
  scanf("%1d%1d%1d%1d%1d", &g, &h, &i, &j, &k);

  control = (((((((a + c + e + g + i + k) * 3) + (b + d + f + h + j)) - 1) % 10) - 9) * -1);
/*
"subtract the remainder from 9" is the same as subtract 9 from the remainder and change its sign.
*/
  printf("Check digit: %d\n", control);

return 0;
}
