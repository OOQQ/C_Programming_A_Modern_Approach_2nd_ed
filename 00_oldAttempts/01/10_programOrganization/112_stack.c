/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt10, pag221, prog112, stack.c
 * -------------------------------------
 * implementing a stack structure
 */

#include <stdbool.h> /* C99 only */

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void){
	top = 0;

return;
}

bool is_empty(void) {

return top == 0;
}

bool is_full(void) {

return top == STACK_SIZE;
}

void push(int i) {
	if (is_full()) {
		stack_overflow();
	} else {
		contents[top++] = i;
	}

return;
}

int pop(void) {
	if (is_empty()) {
		stack_underflow();
	} else {
		return contents[top--];
	}
}

