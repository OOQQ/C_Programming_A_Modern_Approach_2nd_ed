/*
C Programming: A modern approach 2ed.
092 | Pag 180 | Chapter 8 | Programming Project 011 | 092_prgPrjct011.c
by: OOQQ
=======================================
Modify program 065 from chapter 7 so that the program labels the output. Store the number in an array of characters:

Enter phone number: 1-800-COL-LECT
In numeric form: 1-800-265-5328
*/

#include <stdio.h>

#define N 16

int main(void){
  char string[N];
  int i = 0;

  printf("Enter phone number:");

  scanf("%s", &string);
  string[15] = '\0';

  printf("In numeric form: ");

  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] == 'a' || string[i] == 'A' ||
	string[i] == 'b' || string[i] == 'B' ||
	string[i] == 'c' || string[i] == 'C') {
      putchar('2');
      continue;
    } else if (string[i] == 'd' || string[i] == 'D' ||
	       string[i] == 'e' || string[i] == 'E' ||
	       string[i] == 'f' || string[i] == 'F') {
      putchar('3');
      continue;
    } else if (string[i] == 'g' || string[i] == 'G' ||
	       string[i] == 'h' || string[i] == 'H' ||
	       string[i] == 'i' || string[i] == 'I') {
      putchar('4');
      continue;
    } else if (string[i] == 'j' || string[i] == 'J' ||
	       string[i] == 'k' || string[i] == 'K' ||
	       string[i] == 'l' || string[i] == 'L') {
      putchar('5');
      continue;
    } else if (string[i] == 'm' || string[i] == 'M' ||
	       string[i] == 'n' || string[i] == 'N' ||
	       string[i] == 'o' || string[i] == 'O') {
      putchar('6');
      continue;
    } else if (string[i] == 'p' || string[i] == 'P' ||
	       string[i] == 'q' || string[i] == 'Q' ||
	       string[i] == 'r' || string[i] == 'R' ||
	       string[i] == 's' || string[i] == 'S') {
      putchar('7');
      continue;
    } else if (string[i] == 't' || string[i] == 'T' ||
	       string[i] == 'u' || string[i] == 'U' ||
	       string[i] == 'v' || string[i] == 'V') {
      putchar('8');
      continue;
    } else if (string[i] == 'w' || string[i] == 'W' ||
	       string[i] == 'x' || string[i] == 'X' ||
	       string[i] == 'y' || string[i] == 'Y' ||
	       string[i] == 'z' || string[i] == 'Z') {
      putchar('9');
      continue;
    } else {
      putchar(string[i]);
    }
  }

  printf("\n");

return 0;
}
