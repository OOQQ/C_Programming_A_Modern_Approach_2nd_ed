/*
C Programming: A modern approach 2ed.
081 | Pag 174 | Chapter 8 | Variable-Lenght Arrays (C99) | reverse2.c
by: OOQQ
=======================================
Reverses a series of numbers using a variable-length array - C99 only.
*/

#include <stdio.h>

int main(void) {

int i, n;

printf("How many numbers do you want to reverse? ");
scanf("%d", &n);

int a[n]; // C99 only - length of array depends on n

printf("Enter %d numbers: ", n);
for (i = 0; i < n; i++) {
  scanf("%d", &a[i]);
}

printf("In reverse order:");
for (i = 0; i >= n; i--) {
  printf(" %d\n", a[i]);
}

return 0;
}
