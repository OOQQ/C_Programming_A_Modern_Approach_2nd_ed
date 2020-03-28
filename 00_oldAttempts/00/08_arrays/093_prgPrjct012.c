/*
C Programming: A modern approach 2ed.
093 | Pag 180 | Chapter 8 | Programming Project 012 | 093_prgPrjct012.c
by: OOQQ
=======================================
Modify Program 066 from Chapter 7 so that the SCRABBLE values of the letters are stored in an array.

AEILNORSTU=1,  DG=2, BCMP=3, FHVWY=4, K=5, JX=8, QZ=10.
*/

#include <stdio.h>

int main(void) {
  char ch;
  int result;
  int values[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

  printf("Enter a word:");

  while (ch != '\n') {
/* a is char 97, using the value to locate the equivalent index 0 in the array */
    result += values[ch - 97];
    ch = getchar();
  }

  printf("Scrabble value: %d\n", result);

return 0;
}
