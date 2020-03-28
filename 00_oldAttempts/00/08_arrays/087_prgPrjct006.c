/*
C Programming: A modern approach 2ed.
087 | Pag 179 | Chapter 8 | Programming Project 006 | 087_prgPrjct006.c
by: OOQQ
=======================================
Write a 1337 filter that reads a message entered by the user and translates it into 1337 speak

a=4, b=6, c=(, d=d, e=3, f=f, g=9, h=h, i=1, j=j, k=k, l=l, m=m, n=n, o=0, p=p, q=q, r=r, s=5, t=7, u=u, v=v, w=w, x=x, y=y, z=z
*/

#include <stdio.h>

#define N 64

int main (void) {

  char string[N];
  int i;

  printf("Enter message:");
/* take input from user until it's a newline or equal to N */
  while ( (string[i++] = getchar() ) != '\n' && i < N ) {
  ;
  }
/* null-terminate the string */
  string[i] = '\0';

/* resets counter */
  i = 0;

  printf ("In 1337 5p34k: ");

  while (string[i] != '\0') {
    if (string[i] == 'a') {
      putchar('4');
      i++;
      continue;
    } else if (string[i] == 'b') {
      putchar('6');
      i++;
      continue;
    } else if (string[i] == 'c') {
      putchar('(');
      i++;
      continue;
    } else if (string[i] == 'e') {
      putchar('3');
      i++;
      continue;
    } else if (string[i] == 'g') {
      putchar('9');
      i++;
      continue;
    } else if (string[i] == 'i') {
      putchar('1');
      i++;
      continue;
    } else if (string[i] == 'o') {
      putchar('0');
      i++;
      continue;
    } else if (string[i] == 's') {
      putchar('5');
      i++;
      continue;
    } else if (string[i] == 't') {
      putchar('7');
      i++;
      continue;
    }
    printf("%c", string[i++]);
  }

  printf("\n");

return 0;
}
