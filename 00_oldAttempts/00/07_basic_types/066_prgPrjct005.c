/*
C Programming: A modern approach 2ed.
066 | Pag 158 | Chapter 7 | Programming Project 005 | 066_prgPrjct005.c
by: OOQQ
=======================================
In the scrabble crossword game, players form words using small tiles, each containing a letter and a value:
AEILNORSTU=1,  DG=2, BCMP=3, FHVWY=4, K=5, JX=8, QZ=10.

Write a program that computes the value of any word, summing each value.
*/

#include <stdio.h>

int main (void) {
  char ch;
  int counter = 0;

  printf("Enter a word:");
  ch = getchar();

  while (ch != '\n') {
	   if (ch == 'a' || ch == 'A' ||
	       ch == 'e' || ch == 'E' ||
	       ch == 'i' || ch == 'I' ||
	       ch == 'l' || ch == 'L' ||
	       ch == 'n' || ch == 'N' ||
	       ch == 'o' || ch == 'O' ||
	       ch == 'r' || ch == 'R' ||
	       ch == 's' || ch == 'S' ||
	       ch == 't' || ch == 'T' ||
	       ch == 'u' || ch == 'U') {
      counter += 1;
      ch = getchar();
      continue;
    } else if (ch == 'd' || ch == 'D' ||
	       ch == 'g' || ch == 'G') {
      counter += 2;
      ch = getchar();
      continue;
    } else if (ch == 'b' || ch == 'B' ||
	       ch == 'c' || ch == 'C' ||
	       ch == 'm' || ch == 'M' ||
	       ch == 'p' || ch == 'P') {
      counter += 3;
      ch = getchar();
      continue;
    } else if (ch == 'f' || ch == 'F' ||
	       ch == 'h' || ch == 'H' ||
	       ch == 'v' || ch == 'V' ||
	       ch == 'w' || ch == 'W' ||
 	       ch == 'y' || ch == 'Y') {
      counter += 4;
      ch = getchar();
      continue;
    } else if (ch == 'k' || ch == 'K') {
      counter += 5;
      ch = getchar();
      continue;
    } else if (ch == 'j' || ch == 'J' ||
	       ch == 'x' || ch == 'X') {
      counter += 8;
      ch = getchar();
      continue;
    } else if (ch == 'q' || ch == 'Q' ||
	       ch == 'z' || ch == 'Z') {
      counter += 10;
      ch = getchar();
      continue;
    }
    ch = getchar();
  }

  printf("Scrabble value: %d\n", counter);
return 0;
}
