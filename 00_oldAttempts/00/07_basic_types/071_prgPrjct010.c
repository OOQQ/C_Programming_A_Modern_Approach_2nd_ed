/*
C Programming: A modern approach 2ed.
071 | Pag 158 | Chapter 7 | Programming Project 010 | 071_prgPrjct010.c
by: OOQQ
=======================================
Write a program that counts the number of vowels (a, i, u, e, o) in a sentence.
*/

#include <stdio.h>

int main(void) {
  char ch;
  int vowels;

  printf("Enter a sentence:");

  ch = getchar();

  while (ch != '\n') {
    if (ch == 'a' || ch == 'A' ||
        ch == 'i' || ch == 'I' ||
        ch == 'u' || ch == 'U' ||
        ch == 'e' || ch == 'E' ||
        ch == 'o' || ch == 'O') {
          vowels++;
        }
    ch = getchar();
  }

  printf("Your sentence contains %d vowels.\n", vowels);

  return 0;
}
