/*
C Programming: A modern approach 2ed.
070 | Pag 158| Chapter 7 | Programming Project 009 | 070_prgPrjct009.c
by: OOQQ
=======================================
Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:

Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11
*/

#include <stdio.h>

int main(void) {

  int hour, min;
  char am_pm;

  printf("Enter a 12-hour time:");
  scanf("%d:%d ", &hour, &min);

  am_pm = getchar();

  if (am_pm == 'p' || am_pm == 'P') {
    hour += 12;
  }

  printf("Equivalent 24-hour time: %d:%d\n", hour, min);

  return 0;
}
