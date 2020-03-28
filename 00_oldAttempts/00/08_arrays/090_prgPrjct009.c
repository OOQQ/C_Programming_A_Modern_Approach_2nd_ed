/*
C Programming: A modern approach 2ed.
090 | Pag 179 | Chapter 8 | Programming Project 009 | 090_prgPrjct009.c
by: OOQQ
=======================================
Write a program that generates a random walk across a 10x10 array.

A . . . . . . . . .
B C D . . . . . . .
. F E . . . . . . .
H G . . . . . . . .
I . . . . . . . . .
J . . . . . . . Z .
K . . R S T U V Y .
L M P Q . . . W X .
. N O . . . . . . .
. . . . . . . . . .
*/

#include <stdio.h>

/* RGN */
#include <stdlib.h>
#include <time.h>

#define N 10
#define TRUE 1
#define FALSE 0

int main(void) {
  int row = 0;
  int col = 0;
  int i = 0;

/* starting letter, already stored at 0,0 */
  char grid[N][N] = {{65}};
  char letter = 65;
/* direction sniffer */
  int counter[4] = {TRUE, TRUE, TRUE, TRUE};

/* RGN start */
  srand((unsigned) time(NULL));

/* loop start */
  do {
/* RNG call */
    i = rand() % (sizeof(counter) / sizeof(counter[0]));
/* DEBUG printf("starting RGN %d\n", i); */
/* DEBUG printf("grid current pos %d %d\n", row, col); */

/* direction sniffer body */
    if ((col - 1) < 0 || grid[row][col - 1] != 0) {
/* DEBUG printf("top forbidden\n"); */
    counter[0] = FALSE;
    } if ((row + 1) >= N || grid[row + 1][col] != 0) {
/* DEBUG printf("right forbidden\n"); */
    counter[1] = FALSE;
    } if ((col + 1) >= N || grid[row][col + 1] != 0) {
/* DEBUG printf("down forbidden\n"); */
    counter[2] = FALSE;
    } if ((row - 1) < 0 || grid[row - 1][col] != 0) {
/* DEBUG printf("left forbidden\n"); */
    counter[3] = FALSE;
    }

/* DEBUG printf("available directions %d %d %d %d\n", counter[0], counter[1], counter[2], counter[3]); */

/* if everything is forbidden, end */
    if (counter[0] == FALSE && counter[1] == FALSE && counter[2] == FALSE && counter[3] == FALSE) {
      goto end;
    }

/* if there's still hope, pick one available -brute force- */
    while (counter[i] == FALSE) {
/* DEBUG printf("forbidden RGN value %d\n", i); */
      i = rand() % (sizeof(counter) / sizeof(counter[0]));
    }

    switch(i) {
      case 0: col--;
/* DEBUG printf("up selected\n"); */
      break;
      case 1: row++;
/* DEBUG printf("right selected\n"); */
      break;
      case 2: col++;
/* DEBUG printf("down selected\n"); */
      break;
      case 3: row--;
/* DEBUG printf("left selected\n"); */
      break;
    }

/* stores next letter in selected cell */
    grid[row][col] = ++letter;
/* DEBUG printf("\n"); */

/* resets the direction sniffer for another round */
    for (i = 0; i < (sizeof(counter) / sizeof(counter[0])); i++) {
      counter[i] = TRUE;
    }

/* loop ends */
  } while (letter < 90);

/* DEBUG end: printf("\n"); */
  end: for (row = 0; row < N; row++) {
    for (col = 0; col < N; col++) {
/* replace and print all 0's in array with .'s */
      if (grid[row][col] == 0) {
        printf(". ");
      } else {
        printf("%c ", grid[row][col]);
      }
    }
    printf("\n");
  }

return 0;
}
