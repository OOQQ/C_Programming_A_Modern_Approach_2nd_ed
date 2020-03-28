/*
C Programming: A modern approach 2ed.
072 | Pag 158 | Chapter 7 | Programming Project 011 | 072_prgPrjct011.c
by: OOQQ
=======================================
Write a program that takes a first name and last name entered by the user and displays the last name, a comma, and the first initial, followed by a period:

Enter a first and last name: John Doe
Doe, J.

Users Input may contain extra spaces befores the first name, between the first and last names, and after the last name. */

#include <stdio.h>

int main(void) {
  char holdInitial;
  char tempChar;

  printf("Enter a first and last name:");

  /* skips blanks at the initial and stores it */
  scanf(" %c", &holdInitial);

  /* skips rest of the chars in name until space */
  while ((tempChar = getchar()) != ' ') {
    ;
  }

  /* skips (again) all spaces until first surname char, then writes that char if true */
  scanf(" %c", &tempChar);
  putchar(tempChar);

  /* writes rest of chars (surname), and the ending */
  while (tempChar != '\n' || tempChar != ' ') {
    tempChar = getchar();
    if (tempChar == '\n' || tempChar == ' ') {
      printf(", %c.", holdInitial);
      break;
    }
    putchar(tempChar);
  }

return 0;
}
