/*
C Programming: A modern approach 2ed.
025 | Pag 071 | Chapter 4 | Programming Project 004 | 025_prgPrjct004.c
by: OOQQ
=======================================
Write a program that reads an integer entered by the user and displays it in octal (base 8). The output should be displayed using five digits even if fewer digits are sufficient.
*/

#include <stdio.h>

int main(void)
{
  int num;
  printf("Enter a number between 0 and 32767:");
  scanf("%d", &num);

  printf("In octal, your number is : %.5o", num);

  return 0;
}
