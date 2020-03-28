/*
C Programming: A modern approach 2ed.
095 | Pag 180 | Chapter 8 | Programming Project 014 | 095_prgPrjct014.c
by: OOQQ
=======================================
Write a program that reverses the words in a sentence:

Enter a sentence: you can cage a swallow can't you?
Reversed sentence: you can't swallow a cage can you?
*/

#include <stdio.h>

# define ARRAYELEMENTS 32
# define ARRAYLIMIT ARRAYELEMENTS-1
# define TRUE 1
# define FALSE 0

int main(void) {
  int i;
  char special_char;
  int flag = TRUE;

  char array[ARRAYELEMENTS] = {0};
/* a string is a null-terminated array */
  array[ARRAYLIMIT] = '\0';

  printf("Enter a sentence:");

  for (i = 0; ; i++) {
    array[i] = getchar();
    printf("array[%d] %c %d\n", i, array[i], array[i]);
    if (array[i] == '\?' || array[i] == '\.' || array[i] == '\!') {
      special_char = array[i];
    } else if (array[i] == '\n') {
      break;
    }
  }

  printf("\nReversed sentence:\n");

  if (flag == TRUE) {
    while (array[i] != ' ') {
      i--; /* find the previous space */
    }

    if (i == 0) {
      flag = FALSE;
    }

    do {
      putchar(array[i]);
      i++;
    } while (array[i] != '\0');
  }

  printf("\n");
 
  printf("special char %c \n", special_char);

return 0;
}
