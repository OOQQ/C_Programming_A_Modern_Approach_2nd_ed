/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt10, pag238, prog116, prgPrj001.c
 * -------------------------------------
 * modify stack.c so the user enter a series of parentheses and/or braces and
 * indicates if they are properly nested
 *
 * ((){}{()})
 * parentheses are properly nested
 */

#include <stdio.h>

#define MAXARRAY 99

void stack(void);

int main(void) {

	stack();

return 0;
}

void stack() {
	char aStack[MAXARRAY] = {0}, buffer;
	int i = 0;

	printf("Write a string of braces:");

	do {
		buffer = getchar();

		if (buffer == '(' || buffer == '[' || buffer == '{') {
			aStack[i] = buffer;
			i++;
		} else if (buffer == ')' || buffer == ']' || buffer == '}') {
			i--;
			if (aStack[i] == '(' || aStack[i] == '[' || aStack[i] == '{') {
				aStack[i] = 0;
			} else {
				printf("Parentheses are not properly nested.\n");
				break;
			}
		}

	} while (buffer != '\n');

/* watch for dangling braces when string ends */
	if (buffer == '\n' && i == 0 && aStack[0] == 0) {
		printf("Parentheses properly nested.\n");
	}

return;
}

