/*
C Programming: A modern approach 2ed.
086 | Pag 179 | Chapter 8 | Programming Project 005 | 086_prgPrjct005.c
by: OOQQ
=======================================
Modify the 079 interest.c program so that it compounds interest monthly instead of annually. The form of the output shouldn't change; the balance should still be shown at annual intervals.
*/

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE (int) 100.0f

int main(void) {

    int i, low_rate, num_years, year;
    double value[5];

    printf("Inital balance: %d$", INITIAL_BALANCE);
    printf("\nEnter monthly interest rate:");
    scanf("%d", &low_rate);
    printf("Enter number of years:");
    scanf("%d", &num_years);

    printf("\nYears");

    for (i = 0; i < NUM_RATES; i++) {
      printf("%6d%%", low_rate + i);
      value[i] = INITIAL_BALANCE * 0.12f;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
      printf("%3d    ", year);
      for (i = 0; i < NUM_RATES; i++) {
        value[i] += (low_rate + i) / 100.0 * value[i];
        printf("%7.2f", value[i]);
      }
      printf("\n");
    }

return 0;
}
