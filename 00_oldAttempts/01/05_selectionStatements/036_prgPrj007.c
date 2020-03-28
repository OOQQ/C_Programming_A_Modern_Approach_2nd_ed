/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt05, pag096, prog036, prgPrj007.c
 * -------------------------------------
 * write a program that finds the largest and smallest of four ints entered by
 * the user:
 *
 * enter four integers:
 * largest:
 * smallest:
 *
 * use as few if statements as possible
 */

#include <stdio.h>

int main(void) {
	int int1, int2, int3, int4, largest, smallest;

	printf("Enter the four integers:");
	scanf("%d %d %d %d", &int1, &int2, &int3, &int4);

	if (int1 >= int2) {
		largest = int1;
		smallest = int2;
	} else {
		largest = int2;
		smallest = int1;
	}

	if (int3 >= largest) {
		largest = int3;
	} else  if (int3 < smallest) {
		smallest = int3;
	}

	if (int4 >= largest) {
		largest = int4;
	} else if (int4 < smallest) {
		smallest = int4;
	}

	printf("largest: %d\n", largest);
	printf("smallest: %d\n", smallest);

return 0;
}
