/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt10, pag226, prog114, guess2.c
 * -------------------------------------
 * asks the user to guess a hidden number
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* prototypes */
void initialize_number_generator(void);
int new_secret_number(void);
void read_guesses(int secret_number);

int main(void) {
	char command;
	int secret_number;

	printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);

	initialize_number_generator();

	do {
		secret_number = new_secret_number();
		printf("A new number has been choosen.\n");
		read_guesses(secret_number);
		printf("Play again? (Y/N) ");
		scanf(" %c", &command);
		printf("\n");
	} while (command == 'y' || command == 'Y');

return 0;
}

/* init number_generator */
void initialize_number_generator(void) {
	srand((unsigned) time(NULL));

return;
}

/* new secret number */
int new_secret_number(void) {
	return rand() % MAX_NUMBER + 1;
}

/* read_guesses */
void read_guesses(int secret_number) {
	int guess, num_guesses = 0;

	for (;;) {
		num_guesses++;
		printf("Enter guess: ");
		scanf("%d", &guess);
		if (guess == secret_number) {
			printf("You won in %d guesses!\n\n", num_guesses);
			return;
		} else if (guess < secret_number) {
			printf("Too low; try again.\n");
		} else {
			printf("Too high; try again.\n");
		}
	}

return;
}

