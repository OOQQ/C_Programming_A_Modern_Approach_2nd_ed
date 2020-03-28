/*
C Programming: A modern approach 2ed.
006 | Pag 034 | Chapter 2 | Programming Project 002 | 006_prgPrjct002.c
by: OOQQ
=======================================
TASK: Write a program that computes the volume of a sphere with 10m radius, using the formula v=4/3πr³.
*/

#include <stdio.h>

#define PI 3.1415f

int main(void)
{
  int radius = 10;
  float volume;

  volume = ((4.0f / 3.0f) * PI) * (radius * radius * radius);

  printf("%.4f\n", volume);
  return 0;
}
