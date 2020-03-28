/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag096, prog035, prgPrj006.c
 * -------------------------------------
 * modify the upc.c program so that it checks whether a UPC is valid. After the
 * user enters a UPC the program will display either VALID or NOT VALID
 */

#include <stdio.h>

int main(void) {
  int a, b, c, d, e, f, g, h, i, j, k, l, control;

  printf("Enter the the UPC number to check:");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

/* "subtract the remainder from 9" is the same as subtract 9 from the remainder
 * and change its sign.
 */
  control = (((((((a + c + e + g + i + k) * 3) + (b + d + f + h + j)) - 1) % 10) - 9) * -1);

  if (control == l) {
  	  printf("VALID\n");
  } else {
  	  printf("INVALID\n");
  }

return 0;
}

