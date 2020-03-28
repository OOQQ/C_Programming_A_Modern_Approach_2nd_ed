/*
C Programming: A modern approach 2ed.
007 | Pag 034 | Chapter 2 | Programming Project 003 | 007_prgPrjct003.c
by: OOQQ
=======================================
TASK: Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.
*/

#include <stdio.h>

#define PI 3.1415f

int main(void)
{
  float radius;
  float volume;
  
  printf("enter any amount as a radius value:");
  scanf("%f",&radius);

  volume = ((4.0f / 3.0f) * PI) * (radius * radius * radius);

  printf("volume of the sphere is: %.4f\n", volume);
  return 0;
}
