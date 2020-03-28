/*
C Programming: A modern approach 2ed.
083 | Pag 178 | Chapter 8 | Programming Project 002 | 083_prgPrjct002.c
by: OOQQ
=======================================
Modify the 078 repdigit.c program so that it prints a table showing how many times each digit appears in the number.

Enter a number: 41271092
Digit: 0 1 2 3 4 5 6 7 8 9
Repet: 1 2 2 0 1 0 0 1 0 1
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
    printf("Digits:\t\t0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurrences:\t");
    for (i = 0; i < 10; i++) {
      printf("%d  ", decomposed[i]);
    }
  } else {
    printf("No repeated digit\n");
  }

  printf("\n");

return 0;
}
