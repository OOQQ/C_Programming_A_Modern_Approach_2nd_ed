/*
C Programming: A modern approach 2ed.
085 | Pag 179 | Chapter 8 | Programming Project 004 | 085_prgPrjct004.c
by: OOQQ
=======================================
Modify the 077 reverse.c program to use the expression: int (sizeof(a) / sizeof(a[0])) (or a macro with this value) for the array length.
*/

#include <stdio.h>

#define N 3

int main (void) {
  int a[N], i;

  printf("Enter %d numbers:", (sizeof(a) / sizeof(a[0])));
  for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
    scanf("%d", &a[i]);
  }

  printf ("In reverse order: ");
  for (i = (sizeof(a) / sizeof(a[0])) - 1; i >= 0; i--) {
    printf("%d ", a[i]);
  }

return 0;
}
