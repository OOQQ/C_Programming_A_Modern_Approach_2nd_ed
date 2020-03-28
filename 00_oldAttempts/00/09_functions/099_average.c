/*
C Programming: A modern approach 2ed.
099 | Pag 185 | Chapter 9 | Computing averages | average.c
by: OOQQ
=======================================
Computes pairwise averages of three numbers.
*/

#include <stdio.h>

double average(double a, double b) {
	return (a + b) / 2;
}

int main(void) {
	double x, y, z;

	printf("Enter three numbers: ");
	scanf("%lf %lf %lf", &x, &y, &z);
	printf("Average of %g and %g: %g\n", x, y, average(x, y));
	printf("Average of %g and %g: %g\n", y, z, average(y, z));
	printf("Average of %g and %g: %g\n", x, z, average(x, z));

return 0;
}
