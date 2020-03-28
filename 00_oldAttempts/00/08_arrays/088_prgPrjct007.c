/*
C Programming: A modern approach 2ed.
088 | Pag 179 | Chapter 8 | Programming Project 007 | 088_prgPrjct007.c
by: OOQQ
=======================================
Write a program that reads a 5x5 array of integers and then prints the row sums and the column sums:
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0
Row total: 30 27 40 36 28
Column totals: 34 37 37 32 21
*/

#include <stdio.h>

# define N 5

int main (void) {
  int a[N][N];
  int row, col, result = 0;

  printf("Enter row %d:", row + 1 );

  for (row = 0; row < N; row++) {
    for (col = 0; col < N; col++) {
      scanf("%d", &a[row][col]);
    }
    /* avoids printing an empty "insert row" the sixth time */
    if (row == N - 1) {
      break;
    }
    printf("Enter row %d:", row + 2 );
  }

  printf("\nRow total:\n");
  for (row = 0; row < N; row++) {
    for (col = 0; col < N; col++) {
      result += a[row][col];
    }
    printf("\t\t\t\t%d\n", result);
    result = 0;
  }

  printf("Column total: ");
  for (row = 0; row < N; row++) {
    for (col = 0; col < N; col++) {
      result += a[col][row];
    }
    printf("%d ", result);
    result = 0;
  }

  printf("\n");

return 0;
}
