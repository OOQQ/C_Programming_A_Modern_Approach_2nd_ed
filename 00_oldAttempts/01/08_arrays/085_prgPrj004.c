/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag179, prog085, prgPrj004.c
 * -------------------------------------
 * modify the reverse.c program to use the expression
 * (int) (sizeof(a) / sizeof(a[0])) for the array lenght
 */

#include <stdio.h>

#define N 10

int main(void) {
	int a[N], i;

	printf("Enter %d numbers:", N);

	for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++) {
		scanf("%d", &a[i]);
	}

	printf("In reverse order: ");
	for (i = (sizeof(a) / sizeof(a[0])); i > 0; i--) {
		printf("%d ", a[i]);
	}

	printf("\n");

return 0;
}
