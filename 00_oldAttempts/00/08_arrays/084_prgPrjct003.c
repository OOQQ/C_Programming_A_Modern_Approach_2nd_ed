/*
C Programming: A modern approach 2ed.
084 | Pag 178 | Chapter 8 | Programming Project 003 | 084_prgPrjct003.c
by: OOQQ
=======================================
Modify the 078 repdigit.c program so that the user can enter more than one number to be tested for repeated digits. The program should terminate when the user enters a number that's less than or equal to 0.
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main (void) {

  int digit_seen[10] = {FALSE};
  int digit;
  long n;

  start: printf ("Enter a number (enter zero to terminate):");
  scanf ("%ld", &n);

  if (n == FALSE) {
    goto end;
  }

  while (n > FALSE) {
    digit = n % 10;
    if (digit_seen[digit]) {
      break;
    }
    digit_seen[digit] = TRUE;
    n /= 10;
  }

  if (n > FALSE) {
    printf("Repeated digit\n");
  } else {
    printf("No repeated digit\n");
  }

  for (int i = FALSE; i < 10; i++) {
    digit_seen[i] = FALSE;
  }
  digit = FALSE;
  printf("\n");

  goto start;

  end: printf("Program ended\n");

return FALSE;
}
