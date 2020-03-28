/*
C Programming: A modern approach 2ed.
004 | Pag 024 | Chapter 2 | Converting from fahrenheith to celsius | 004_celsius.c
by: OOQQ
=======================================
The following program prompts the user to enter a Fahrenheit temperature; it then prints the equivalent Celsius temperature.
*/

#include <stdio.h>

#define CONSTANT 32
#define OPERATION (5.0f / 9.0f)

int main(void)
{
  float input, result;

  printf("enter fahrenheith temperature:");
  scanf("%f", &input);

  result = (input - CONSTANT) * OPERATION;

  printf("temperature in celsius is: %.1fºC\n", result);

  return 0;
}
