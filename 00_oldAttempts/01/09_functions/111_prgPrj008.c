/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt09, pag217, prog111, prgPrj008.c
 * -------------------------------------
 * write a program that simulates a game of craps, which is played with two
 * dices
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice();
int play_game();

int main(void) {
	int wins = 0, losses = 0;
	char dicision = 'y';

/* start the RNG */
	srand((unsigned) time(NULL));

	do {

		if (play_game() == 1) {
			wins++;
		} else {
			losses++;
		}

		printf("\nPlay again? (y/n):");
		scanf("%c", &dicision);
		getchar(); // removes the enter char leftover

	} while (dicision != 'n');

	printf("\nWins: %d\tLosses: %d\n", wins, losses);

return 0;
}

int roll_dice() {
	int dice1, dice2, roll;

	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	roll = dice1 + dice2;

return roll;
}

int play_game() {
	int value, point, outcome = 0;

	value = roll_dice();

		printf("\nYou rolled: %d\n", value);

	  if (value == 7 || value == 11) {
			printf("You win!\n");
		  outcome++;
		  return outcome;
	  } else if (value == 2 || value == 3 || value == 12) {
			printf("You lose :(\n");
		  outcome--;
		  return outcome;
	  }

  point = value;
  printf("Your point is: %d\n", point);
  putchar('\n');

  while(1) {
  	value = roll_dice();

		printf("You rolled: %d\n", value);

		if (value == point) {
			printf("You win!\n");
      outcome++;
      return outcome;
    } else if (value == 7) {
      printf("You lose :(\n");
		  outcome--;
  		return outcome;
    } else {
    	continue;
    }
  }

}

