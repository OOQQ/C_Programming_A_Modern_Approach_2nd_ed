/*
C Programming: A modern approach 2ed.
082 | Pag 178 | Chapter 8 | Programming Project 001 | 082_prgPrjct001.c
by: OOQQ
=======================================
Modify the 078 repdigit.c program so that it shows which digit (if any) were repeated.

Enter a number: 939577
Repeated digits: 7 9
*/

#include <stdio.h>

int main (void) {

  int decomposed[10] = {0};
  int index;
  int i;
  int flag; /* stores if there is any repeated digit (bigger than value 2) */
  long input;

  printf ("Enter a number:");
  scanf ("%ld", &input);

  while (input > 0) {
    index = input % 10;
    decomposed[index]++;
    input /= 10;
    if (decomposed[index] >= 2) {
      flag = 1;
    }
  }

  if (flag == 1) {
    printf("Repeated digits:");
    for (i = 0; i < 10; i++) {
      if (decomposed[i] >= 2) {
      printf(" %d", i);
      }
    }
  } else {
    printf("No repeated digit\n");
  }

  printf("\n");

return 0;
}
