/*
C Programming: A modern approach 2ed.
014 | Pag 046 | Chapter 3 | Adding fractions | 014_addfrac.c
by: OOQQ
=======================================
The following program which adds two fractions, illustrates this technique.
*/

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter first fraction:\t ");
  scanf("%d/%d", &num1, &denom1);

  printf("Enter second fraction:\t ");
  scanf("%d/%d", &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;

  result_denom = denom1 * denom2;
  printf("\nThe sum is:\t\t  %d/%d\n", result_num, result_denom);

  return 0;
}
