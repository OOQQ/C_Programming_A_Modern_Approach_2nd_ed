/*
C Programming: A modern approach 2ed.
012 | Pag 035 | Chapter 2 | Programming Project 008 | 012_prgPrjct008.c
by: OOQQ
=======================================
TASK: Write a program that calculates the remaining balance on a loan after the first, second and third monthly payments.
*/

#include <stdio.h>

int main(void)
{
  float amount, interest, monthlyPayment, taxEveryMonth, totalDebt;

  printf("Enter amount of loan:");
  scanf("%f", &amount);
  printf("Enter interest rate:");
  scanf("%f", &interest);
  printf("Enter monthly payment:");
  scanf("%f", &monthlyPayment);

  taxEveryMonth = ((amount * interest) / 100) / 12;
  amount = amount - monthlyPayment;
  totalDebt = amount + taxEveryMonth;
  printf("\nBalance remaining after fist payment: $%.2f\n", totalDebt);

  taxEveryMonth = ((amount * interest) / 100) / 12;
  amount = amount - monthlyPayment;
  totalDebt = amount + taxEveryMonth;
  printf("Balance remaining after scnd payment: $%.2f\n", totalDebt);

  taxEveryMonth = ((amount * interest) / 100) / 12;
  amount = amount - monthlyPayment;
  totalDebt = amount + taxEveryMonth;
  printf("Balance remaining after thrd payment: $%.2f\n", totalDebt);

  return 0;
}
