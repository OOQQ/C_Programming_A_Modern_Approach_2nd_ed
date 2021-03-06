/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt10, pag239, prog122b, prgPrj008.c
 * -------------------------------------
 * (ignoring requirements) write a program that asks for a number and then
 * displays the number simulating a 10 digit seven-segment display
 *
 * Enter a number: 1234567890
 *    _  _       _   _  _   _   _   _
 * |  _| _| |_| |_  |_   | |_| |_| | |
 * | |_  _|   |  _| |_|  | |_|  _| |_|
 */

#include <stdio.h>

#define RANGE 3
#define HEIGHT 3
#define MAXLENGHT 10

const char aDisplay[HEIGHT][40] = {{" _       _   _       _   _   _   _   _  "},
                                   {"| |   |  _|  _| |_| |_  |_    | |_| |_| "},
                                   {"|_|   | |_   _|   |  _| |_|   | |_|  _| "}
};

int main(void) {
  int currentNum, firstNum, rangeStart, rangeEnd, currentHeight = 0;
  int aArray[MAXLENGHT] = {0};

  printf("Enter a number:");
  scanf("%10d", &aArray[0]);

/* separates each digit, storing one in one index, starting from the end, all other index are zero */
  for (currentNum = MAXLENGHT - 1; currentNum > 0; currentNum--) {
    aArray[currentNum] = aArray[0] % 10;
    aArray[0] /= 10;
    if (aArray[0] == 0) {
      break;
    }
  }

/* currentNum is now the index of the first digit */
  firstNum = currentNum; /* saves the position of the first digit 4 later */

  while (currentHeight < HEIGHT) {

    do {
      switch (aArray[currentNum]) {
        case 0: rangeStart = 0;
          break;
        case 1: rangeStart = 4;
          break;
        case 2: rangeStart = 8;
          break;
        case 3: rangeStart = 12;
          break;
        case 4: rangeStart = 16;
          break;
        case 5: rangeStart = 20;
          break;
        case 6: rangeStart = 24;
          break;
        case 7: rangeStart = 28;
          break;
        case 8: rangeStart = 32;
          break;
        case 9: rangeStart = 36;
          break;
      }

      rangeEnd = rangeStart + RANGE;

      for (rangeStart; rangeStart <= rangeEnd; rangeStart++) {
        printf("%c", aDisplay[currentHeight][rangeStart]);
      }

      currentNum++;
    } while (currentNum < MAXLENGHT);

    printf("\n");
    currentHeight++;
    currentNum = firstNum; /* sets the reading onto the first number again */
  }

return 0;
}

