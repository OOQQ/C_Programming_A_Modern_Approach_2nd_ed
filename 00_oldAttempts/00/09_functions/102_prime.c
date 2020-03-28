/*
C Programming: A modern approach 2ed.
102 | Pag 190 | Chapter 9 | Testing whether a Number is Prime | prime.c
by: OOQQ
=======================================
Instead of putting the prime-testing details in main, we'll define a separate function that returns true if its parameter is a prime number and false if it isn't.
*/

#include <stdio.h>

#define FALSE 0
#define TRUE 1

int is_prime(int n){
  int divisor;

  if (n <= 1) {
    return FALSE;
  }
  for (divisor = 2; divisor * divisor <= n; divisor++) {
    if (n % divisor == 0) {
    return FALSE;
    }
    return TRUE;
  }
}

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);
  if (is_prime(n)) {
    printf("Prime number.\n");
  } else {
    printf("Not a Prime number.\n");
  }

return 0;
}
