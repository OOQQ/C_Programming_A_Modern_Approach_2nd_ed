/*
C Programming: A modern approach 2ed.
097 | Pag 181 | Chapter 8 | Programming Project 016 | 097_prgPrjct016.c
by: OOQQ
=======================================
Write a program that test whether two words are anagrams:

Enter first word: smartest
Enter second word: mattress
Words are anagrams.

*/

#include <stdio.h>

#define N 26
#define TRUE 1
#define FALSE 0

int main(void) {
  char letters[N] = {0};
  char ch;
  int i, z;

  printf("Enter first word:");
  do {
    ch = getchar();
    switch(ch) {
      case 65:
      case 97: letters[0] += 1;
        break;
      case 66:
      case 98: letters[1] += 1;
        break;
      case 67:
      case 99: letters[2] += 1;
        break;
      case 68:
      case 100: letters[3] += 1;
        break;
      case 69:
      case 101: letters[4] += 1;
        break;
      case 70:
      case 102: letters[5] += 1;
        break;
      case 71:
      case 103: letters[6] += 1;
        break;
      case 72:
      case 104: letters[7] += 1;
        break;
      case 73:
      case 105: letters[8] += 1;
        break;
      case 74:
      case 106: letters[9] += 1;
        break;
      case 75:
      case 107: letters[10] += 1;
        break;
      case 76:
      case 108: letters[11] += 1;
        break;
      case 77:
      case 109: letters[12] += 1;
        break;
      case 78:
      case 110: letters[13] += 1;
        break;
      case 79:
      case 111: letters[14] += 1;
        break;
      case 80:
      case 112: letters[15] += 1;
        break;
      case 81:
      case 113: letters[16] += 1;
        break;
      case 82:
      case 114: letters[17] += 1;
        break;
      case 83:
      case 115: letters[18] += 1;
        break;
      case 84:
      case 116: letters[19] += 1;
        break;
      case 85:
      case 117: letters[20] += 1;
        break;
      case 86:
      case 118: letters[21] += 1;
        break;
      case 87:
      case 119: letters[22] += 1;
        break;
      case 88:
      case 120: letters[23] += 1;
        break;
      case 89:
      case 121: letters[24] += 1;
        break;
      case 90:
      case 122: letters[25] += 1;
        break;
    }
  } while (ch != '\n');

  printf("Enter second word:");
  do {
    ch = getchar();
    switch(ch) {
      case 65:
      case 97: letters[0] -= 1;
        break;
      case 66:
      case 98: letters[1] -= 1;
        break;
      case 67:
      case 99: letters[2] -= 1;
        break;
      case 68:
      case 100: letters[3] -= 1;
        break;
      case 69:
      case 101: letters[4] -= 1;
        break;
      case 70:
      case 102: letters[5] -= 1;
        break;
      case 71:
      case 103: letters[6] -= 1;
        break;
      case 72:
      case 104: letters[7] -= 1;
        break;
      case 73:
      case 105: letters[8] -= 1;
        break;
      case 74:
      case 106: letters[9] -= 1;
        break;
      case 75:
      case 107: letters[10] -= 1;
        break;
      case 76:
      case 108: letters[11] -= 1;
        break;
      case 77:
      case 109: letters[12] -= 1;
        break;
      case 78:
      case 110: letters[13] -= 1;
        break;
      case 79:
      case 111: letters[14] -= 1;
        break;
      case 80:
      case 112: letters[15] -= 1;
        break;
      case 81:
      case 113: letters[16] -= 1;
        break;
      case 82:
      case 114: letters[17] -= 1;
        break;
      case 83:
      case 115: letters[18] -= 1;
        break;
      case 84:
      case 116: letters[19] -= 1;
        break;
      case 85:
      case 117: letters[20] -= 1;
        break;
      case 86:
      case 118: letters[21] -= 1;
        break;
      case 87:
      case 119: letters[22] -= 1;
        break;
      case 88:
      case 120: letters[23] -= 1;
        break;
      case 89:
      case 121: letters[24] -= 1;
        break;
      case 90:
      case 122: letters[25] -= 1;
        break;
    }
  } while (ch != '\n');

  for (i = 0; i < N; i++) {
    if (letters[i] != 0) {
      z++;
    }
  }

  if (z == 0) {
    printf("Words are anagrams.\n");
  } else {
    printf("Words are not anagrams.\n");
  }

return 0;
}
