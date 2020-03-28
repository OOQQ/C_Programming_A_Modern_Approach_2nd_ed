/*
C Programming: A modern approach 2ed.
100 | Pag 186 | Chapter 9 | Printing a countdown | countdown.c
by: OOQQ
=======================================
Prints a countdown.
*/

#include <stdio.h>

void print_count(int n) {
  printf ("T minus %d and counting\n", n);
}

int main(void) {
  int i;

  for (i = 10; i > 0; i--) {
    print_count(i);
  }

return 0;
}
