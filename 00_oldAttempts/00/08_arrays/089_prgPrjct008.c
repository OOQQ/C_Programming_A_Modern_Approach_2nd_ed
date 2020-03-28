/*
C Programming: A modern approach 2ed.
089 | Pag 179 | Chapter 8 | Programming Project 008 | 089_prgPrjct008.c
by: OOQQ
=======================================
Modify programming project 7 so that it prompts for five quiz grades for each of five students, then computes the total score and average score for each student. And the average score, high score and low score for each quiz.

Student 1 grades:  8  3  9  0 10
Student 2 grades:  3  5 17  1  1
Student 3 grades:  2  8  6 23  1
Student 4 grades: 15  7  3  2  9
Student 5 grades:  6 14  2  6  0

Student 1: total: 30  average: 6.0
Student 2: total: 27  average: 5.4
Student 3: total: 40  average: 8.0
Student 4: total: 36  average: 7.2
Student 5: total: 28  average: 5.6

Quiz 1 high: 15   low: 2  average: 6.8
Quiz 2 high: 14   low: 3  average: 7.4
Quiz 3 high: 17   low: 2  average: 7.4
Quiz 4 high: 23   low: 0  average: 6.4
Quiz 5 high: 10   low: 0  average: 4.2
*/

#include <stdio.h>

# define N 5

int main (void) {
  int grades[N][N];
  int row, col, high = 0, low = 100, result = 0;

  for (row = 0; row < N; row++) {
    printf("Student %d grades:", row + 1 );
    for (col = 0; col < N; col++) {
      scanf("%d", &grades[row][col]);
    }
  }

  for (row = 0; row < N; row++) {
    printf("\nStudent %d total:", row + 1);
    for (col = 0; col < N; col++) {
      result += grades[row][col];
    }
    printf(" %d\t average: %.1f", result, ((float) result / 5.0f));
    result = 0;
  }
  printf("\n");

  for (row = 0; row < N; row++) {
    printf("\nQuiz %d ", row + 1);
    for (col = 0; col < N; col++) {
      result += grades[col][row];
      if (grades[col][row] > high) {
        high = grades[col][row];
      } else if (grades[col][row] < low) {
        low = grades[col][row];
      }
    }
    printf("high: %d\t\t low: %d\t\t average: %.1f", high, low, ((float) result / 5.0f));
    result = 0;
    high = 0;
    low = 100;
  }
  printf("\n");

return 0;
}
