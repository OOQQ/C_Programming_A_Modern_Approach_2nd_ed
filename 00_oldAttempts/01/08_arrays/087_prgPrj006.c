/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag179, prog087, prgPrj006.c
 * -------------------------------------
 * write a 1337 filter that reads a message entered by the user and translates
 * it into 1337 speak: a=4, b=6, c=(, d=d, e=3, f=f, g=9, h=h, i=1, j=j, k=k,
 * l=l, m=m, n=n, o=0, p=p, q=q, r=r, s=5, t=7, u=u, v=v, w=w, x=x, y=y, z=z
 */

#include <stdio.h>
#include <ctype.h>

#define N 128

int main(void) {
	char string[N];
	int i;

	printf("Enter a message:");
	for (i = 0; (string[i] = toupper(getchar())) != '\n'; i++) {
		;
	}

	printf("In 1337 speak: ");
	for (i = 0; string[i] != '\n'; i++) {
		switch (string[i]) {
			case 'A': putchar('4');
				break;
			case 'B': putchar('6');
				break;
			case 'C': putchar('(');
				break;
			case 'E': putchar('3');
				break;
			case 'G': putchar('9');
				break;
			case 'I': putchar('1');
				break;
			case 'O': putchar('0');
				break;
			case 'S': putchar('5');
				break;
			case 'T': putchar('7');
				break;
			default: putchar(string[i]);
		}
	}

	printf("\n");

return 0;
}
