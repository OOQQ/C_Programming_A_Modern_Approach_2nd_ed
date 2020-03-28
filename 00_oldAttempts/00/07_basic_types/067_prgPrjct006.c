/*
C Programming: A modern approach 2ed.
067 | Pag 158 | Chapter 7 | Programming Project 006 | 067_prgPrjct006.c
by: OOQQ
=======================================
Write a program that prints the values of sizeof(int), short, long, float, double, and long double.
*/

#include <stdio.h>

int main(void) {
  char c;
  short s;
  int i;
  long l;
  double d;
  float f;
  long double g;

  printf("size of char: \t\t%d\n", sizeof(c));
  printf("size of short: \t\t%d\n", sizeof(s));
  printf("size of int: \t\t%d\n", sizeof(i));
  printf("size of float: \t\t%d\n", sizeof(f));
  printf("size of long: \t\t%d\n", sizeof(l));
  printf("size of double: \t%d\n", sizeof(d));
  printf("size of long double: \t%d\n", sizeof(g));

  return 0;
}
