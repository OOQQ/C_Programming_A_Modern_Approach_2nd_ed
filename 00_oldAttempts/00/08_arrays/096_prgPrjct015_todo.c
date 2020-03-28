/*
C Programming: A modern approach 2ed.
096 | Pag 180 | Chapter 8 | Programming Project 015 | 096_prgPrjct015.c
by: OOQQ
=======================================
Write a Caesar Cipher. Characters other than letter are left unchanged, lower and uppercase remain intact when ciphered

Enter a message to be encrypted: Go ahead, make my day.
Enter shift amount (1-25): 3
Encrypted message: Jr dkhdg, pdhdg pb gdb.
*/

/* TODO warp around */

#include <stdio.h>

# define ARRAYELEMENTS 64
# define ARRAYLIMIT ARRAYELEMENTS-1

int main(void) {
  int i;
  int shift_amount;

  char array[ARRAYELEMENTS] = {0};
/* a string is a null-terminated array */
  array[ARRAYLIMIT] = '\0';

  printf("Enter a message to be encrypted:");

  for (i = 0; ; i++) {
    array[i] = getchar();
    printf("array[%d] %c %d\n", i, array[i], array[i]);
    if (array[i] == '\n') {
      break;
    }
  }

  printf("Enter shift amount (1-25):");
  scanf("%d", &shift_amount);

  printf("Encrypted message: ");

  for (i = 0; i != '\n'; i++) {
    if (array[i] >= 97 && array[i] <= 122) { //minus
      putchar(array[i] + shift_amount);
    } else if (array[i] >= 65 && array[i] <= 90) { //mayus
      putchar(array[i] + shift_amount);
    } else {
      putchar(array[i]);
    }
  }

return 0;
}
