/*
C Programming: A modern approach 2ed.
065 | Pag 157 | Chapter 7 | Programming Project 004 | 065_prgPrjct004.c
by: OOQQ
=======================================
Write a program that translates an alphabetic phone number into numeric form:

Enter phone number: 1-800-STAR-WARS
Result: 1-800-7827-9277
*/

#include <stdio.h>

int main (void) {
  char ch;

  printf("Enter phone number:");
  ch = getchar();

  while (ch != '\n') {
	   if (ch == 'a' || ch == 'A' ||
	       ch == 'b' || ch == 'B' ||
	       ch == 'c' || ch == 'C') {
      putchar('2');
      ch = getchar();
      continue;
    } else if (ch == 'd' || ch == 'D' ||
	       ch == 'e' || ch == 'E' ||
	       ch == 'f' || ch == 'F') {
      putchar('3');
      ch = getchar();
      continue;
    } else if (ch == 'g' || ch == 'G' ||
	       ch == 'h' || ch == 'H' ||
	       ch == 'i' || ch == 'I') {
      putchar('4');
      ch = getchar();
      continue;
    } else if (ch == 'j' || ch == 'J' ||
	       ch == 'k' || ch == 'K' ||
	       ch == 'l' || ch == 'L') {
      putchar('5');
      ch = getchar();
      continue;
    } else if (ch == 'm' || ch == 'M' ||
	       ch == 'n' || ch == 'N' ||
	       ch == 'o' || ch == 'O') {
      putchar('6');
      ch = getchar();
      continue;
    } else if (ch == 'p' || ch == 'P' ||
	       ch == 'q' || ch == 'Q' ||
	       ch == 'r' || ch == 'R' ||
	       ch == 's' || ch == 'S') {
      putchar('7');
      ch = getchar();
      continue;
    } else if (ch == 't' || ch == 'T' ||
	       ch == 'u' || ch == 'U' ||
	       ch == 'v' || ch == 'V') {
      putchar('8');
      ch = getchar();
      continue;
    } else if (ch == 'w' || ch == 'W' ||
	       ch == 'x' || ch == 'X' ||
	       ch == 'y' || ch == 'Y' ||
	       ch == 'z' || ch == 'Z') {
      putchar('9');
      ch = getchar();
      continue;
    }
    putchar(ch);
    ch = getchar();
  }

return 0;
}
