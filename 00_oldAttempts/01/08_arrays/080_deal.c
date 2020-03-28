/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt08, pag166, prog078, repdigit.c
 * -------------------------------------
 * our next program illustrates both two-dimensional arrays and constant arrays,
 * the program deals a random hand from a standard deck of playing cards, We'll
 * have the user specify how many cards should be in the hand
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
	bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
	int num_cards, rank, suit;
	const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j',
							  'q', 'k', 'a'};
	const char suit_code[] = {'c', 'd', 'h', 's'};

	srand((unsigned) time(NULL));

	printf("Enter the number of cards in hand:");
	scanf("%d", &num_cards);

	printf("Your hand:");

	while (num_cards > 0) {
		suit = rand() % NUM_SUITS; /* pick random suit */
		rank = rand() % NUM_RANKS; /* pick random rank */
		if (!in_hand[suit][rank]) {
			in_hand[suit][rank] = true;
			num_cards--;
			printf(" %c%c", rank_code[rank], suit_code[suit]);
		}
	}

	printf("\n");

return 0;
}
