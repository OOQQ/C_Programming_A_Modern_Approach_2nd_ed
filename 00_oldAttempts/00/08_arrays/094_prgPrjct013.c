/*
C Programming: A modern approach 2ed.
094 | Pag 180 | Chapter 8 | Programming Project 013 | 094_prgPrjct013.c
by: OOQQ
=======================================
Modify Program 072 from chapter 7 so that the program labels its outputs. Store the last name in an array of characters.

Enter a first and a last name: Emmet Brown
You entered the name: Brown, E.
*/

#include <stdio.h>

# define N 16

int main(void) {
  char hold_initial;
  char string[N];

  printf("Enter a first and last name:");

  /* skips blanks at the initial and stores it */
  scanf(" %c", &hold_initial);
  /* skips rest of the chars in name until space */
  while (getchar() != ' ') {
    ;
  }

  /* skips (again) all spaces until first surname char, then writes that char if true */
  scanf(" %s", &string);
  string[15] = '\0';

  printf("%s, ", string);
  putchar(hold_initial);
  printf(".");

return 0;
}
