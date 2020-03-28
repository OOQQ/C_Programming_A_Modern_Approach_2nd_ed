/*
C Programming: A modern approach 2ed.
013 | Pag 040 | Chapter 3 | Using printf to Format Numbers | 013_tprintf.c
by: OOQQ
=======================================
The following program illustrates the use of printf to print integers and floating-point numbers in various formats.
*/

#include <stdio.h>

int main(void)
{
  int i;
  float x;

  i = 40;
  x = 839.21f;

  printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
  printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

  return 0;
}
