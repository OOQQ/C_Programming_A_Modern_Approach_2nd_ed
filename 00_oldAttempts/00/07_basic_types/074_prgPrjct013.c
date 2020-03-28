/*
C Programming: A modern approach 2ed.
074 | Pag 159 | Chapter 7 | Programming Project 013 | 074_prgPrjct013.c
by: OOQQ
=======================================
Write a program that calculates the average word lenght for a sentece.

Enter a sentence: It was a deja vu all over again.
Average word lenght: 3.4

The program should consider a punctuation mark to be part of the word to which it is attached.
*/

#include <stdio.h>

int main(void) {
  float letters, words = 1, average;
  char ch;

  printf("Enter a sentence:");

  while (ch != '\n') {
    ch = getchar();
    letters++;
    if (ch == ' ' ) {
      words++;
      letters--; /* uncounts spaces */
    }
  }

  letters--; /* uncounts enter */
  average = (letters / words);

  printf("letters: %.1f\n", letters);
  printf("words: %.1f\n", words);

  printf("Average word lenght: %.1f", average);

return 0;
}
