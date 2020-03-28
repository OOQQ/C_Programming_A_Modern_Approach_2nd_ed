/*
C Programming: A modern approach 2ed.
077 | Pag 164 | Chapter 8 | Reversing a series of numbers | reverse.c
by: OOQQ
=======================================
Our first array program prompts the user to enter a series of numbers, then writes the numbers in reverse order.
*/

#include <stdio.h>

#define N 10

int main (void) {
  int a[N], i;

  printf("Enter %d numbers:", N);
  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }

  printf ("In reverse order: ");
  for (i = N - 1; i >= 0; i--) {
    printf("%d ", a[i]);
  }

return 0;
}
