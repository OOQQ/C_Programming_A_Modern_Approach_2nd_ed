/*
C Programming: A modern approach 2ed.
003 | Pag 022 | Chapter 2 | Computing the dimensional weight of a box (revisited) | 003_dweight2.c
by: OOQQ
=======================================
Here's an improved version of the dimensional weight program in which the user enters the dimensions.
*/

#include <stdio.h>

int main(void)
{
  int height, lenght, width, volume, weight;

  printf("enter height:");
  scanf("%d", &height);
  printf("enter lenght:");
  scanf("%d", &lenght);
  printf("enter width:");
  scanf("%d", &width);

  volume = height * lenght * width;
  weight = (volume + 165) / 166;
  
  printf("dimensions: %d x %d x %d\n", height, lenght, width);
  printf("volume (cubic inches): %d\n", volume);
  printf("dimensional weight (pounds): %d\n", weight);

  return 0;
}
