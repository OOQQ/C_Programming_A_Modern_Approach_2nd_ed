/*
C Programming: A modern approach 2ed.
063 | Pag 157 | Chapter 7 | Programming Project 002 | 063_prgPrjct002.c
by: OOQQ
=======================================
Modify the square2.c program of Section 6.3 so that it will pause after every 24 squares printed and displays the following message:

"Press enter to continue"

After displaying the message, the program should use getchar() to read a character. getchar() wont allow the program to run until the user press the enter key.
*/

#include <stdio.h>

int main (void)
{
  int num, i, counter_buffer = 0, counter_stop = 25, cleaning;

  printf("This program prints a table of squares.\n");
  printf("Number of entries in table:");
  scanf("%d", &num);
  cleaning = getchar();

  for (i = 1; i <= num; i++) {
    printf("%10d%10d\n", i, i * i);
    counter_buffer++;
    if (counter_buffer == counter_stop) {
      do {
	printf("Press enter to continue...");
        counter_buffer = 0;
        continue;
      } while (getchar() != '\n');
    }
  }

return 0;
}
