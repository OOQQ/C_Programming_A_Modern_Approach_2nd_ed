/*
C Programming: A modern approach 2ed.
073 | Pag 158 | Chapter 7 | Programming Project 012 | 073_prgPrjct012.c
by: OOQQ
=======================================
Write a program that evaluates an expression:

Enter an expression: 1+2.5*3
Value of expression: 10.5

The operands in the expression are floating-point numbers, the operators are +, -, * and /. The expresion is evaluated from left to right, (no operator takes precedence).
*/

#include <stdio.h>

int main(void) {
  char operand;
  float value, result;

   printf("Enter an expression:");

   scanf("%f", &result);
   operand = getchar();

   while (operand != '\n') {
     scanf("%f", &value);
     if (operand == '+') {
       result += value;
     } else if (operand == '-') {
       result -= value;
     } else if (operand == '*') {
       result *= value;
     } else if (operand == '/') {
       result /= value;
     }
     operand = getchar();
   }

  printf("Value of expression: %.1f\n", result);

return 0;
}
