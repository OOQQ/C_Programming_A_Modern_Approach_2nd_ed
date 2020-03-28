/*
C Programming: A modern approach 2ed.
078 | Pag 166 | Chapter 8 | Checking a number for Repeated Digits | repdigit.c
by: OOQQ
=======================================
Our next program checks whether any of the digits in a number appear more than once. After the user enters a number, the program prints either repeated digit, or, no repeated digit.

Enter a number: 28212
Repeated Digit
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main (void) {

  int digit_seen[10] = {FALSE};
  int digit;
  long n;

  printf ("Enter a number:");
  scanf ("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) {
      break;
    }
    digit_seen[digit] = TRUE;
    n /= 10;
  }

  if (n > 0) {
    printf("Repeated digit\n");
  } else {
    printf("No repeated digit\n");
  }

return 0;
}
