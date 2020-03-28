/*
C Programming: A modern approach 2ed.
068 | Pag 158| Chapter 7 | Programming Project 005 | 066_prgPrjct005.c
by: OOQQ
=======================================
Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply or divide two fractions (by entering either +, -, * or / between fractions).
*/

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  char operand;

  printf("Enter two fractions to operate: ");
  scanf("%d/", &num1);
  scanf("%d", &denom1);
  operand = getchar();
  scanf("%d/", &num2);
  scanf("%d", &denom2);

  if (operand == '+') {
    result_num = (num1 * denom2) + (denom1 * num2);
    result_denom = (denom1 * denom2);
    printf("Result of ADDITION is: %d/%d\n", result_num, result_denom);
  } else if (operand == '-') {
    result_num = (num1 * denom2) - (denom1 * num2);
    result_denom = (denom1 * denom2);
    printf("Result of SUBSTRACTION is: %d/%d\n", result_num, result_denom);
  } else if (operand == '*') {
    result_num = (num1 * num2);
    result_denom = (denom1 * denom2);
    printf("Result of MULTIPLICATION is: %d/%d\n", result_num, result_denom);
  } else if (operand == '/') {
    result_num = (num1 * denom2);
    result_denom = (denom1 * num2);
    printf("Result of DIVISION is: %d/%d\n", result_num, result_denom);
  }

  return 0;
}
