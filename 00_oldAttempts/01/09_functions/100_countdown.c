/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt09, pag186, prog100, countdown.c
 * -------------------------------------
 * prints a countdown
 */

#include <stdio.h>

void print_count(int n) {
	printf ("T minus .2%d and counting\n", n);
}

int main(void) {
	int i;

	for (i = 10; i > 0; i--) {
		print_count(i);
	}

return 0;
}

