/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt03, pag050, prog017, prgPrj003.c
 * -------------------------------------
 * write a program that breaks down an ISBN entered by the user
 *
 * Enter ISBN: 978-0-393-97950-3
 * GS1 prefix: 978
 * Group identifier: 0
 * Publisher code: 393
 * Item number: 97950
 * Check digit: 3
 */

#include <stdio.h>

int main(void) {
	int gs1, groupID, publisherCode, itemNum, checkD;

	printf("Enter ISBN:");
	scanf("%d-%d-%d-%d-%d", &gs1, &groupID, &publisherCode, &itemNum, &checkD);

	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", groupID);
	printf("Publisher Code: %d\n", publisherCode);
	printf("Item number: %d\n", itemNum);
	printf("Check digit: %d\n", checkD);

return 0;
}
