/*
C Programming: A modern approach 2ed.
017 | Pag 050 | Chapter 3 | Programming Project 003 | 017_prgPrjct003.c
by: OOQQ
=======================================
Write a program that breaks down an ISBN entered by the user.
*/

#include <stdio.h>

int main(void)
{
  int isbn0, isbn1, isbn2, isbn3, isbn4;

  printf("Enter ISBN: ");
  scanf("%d", &isbn0);
  scanf("-%d", &isbn1);
  scanf("-%d", &isbn2);
  scanf("-%d", &isbn3);
  scanf("-%d", &isbn4);

  printf("GS1 prefix: %d\n", isbn0);
  printf("Group Identifier: %d\n", isbn1);
  printf("Publisher code: %d\n", isbn2);
  printf("Item number: %d\n", isbn3);
  printf("Check digit: %d\n", isbn4);

  return 0;
}
