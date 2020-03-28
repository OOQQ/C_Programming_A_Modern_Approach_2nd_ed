/*
C Programming: A modern approach 2ed.
019 | Pag 050 | Chapter c | Programming Project 005 | 019_prgPrjct005.c
by: OOQQ
=======================================
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns and diagonals.
*/

#include <stdio.h>

int main(void)
{
  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

  printf("Enter the numbers from 1 to 16 in any order:");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  scanf("%d", &f);
  scanf("%d", &g);
  scanf("%d", &h);
  scanf("%d", &i);
  scanf("%d", &j);
  scanf("%d", &k);
  scanf("%d", &l);
  scanf("%d", &m);
  scanf("%d", &n);
  scanf("%d", &o);
  scanf("%d", &p);

  printf("You entered:\n %d %d %d %d\n %d %d %d %d\n %d %d %d %d\n %d %d %d %d\n", a, b, c, d,
										   e, f, g, h,
										   i, j, k, l,
										   m, n, o, p);

  printf("Row sums: %d %d %d %d\n", a + b + c + d, e + f + g + h, i + j + k + l, m + n + o + p);
  printf("Column sums: %d %d %d %d\n", a + e + i + m, b + f + j + n, c + g + k + o, d + h + l + p);
  printf("Diagonal sums: %d %d\n", a + f + k + p, d + g + j + m);

  return 0;
}
