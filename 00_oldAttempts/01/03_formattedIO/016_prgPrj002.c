/* solution by OOQQ
 * c programming: a modern approach 2ed.
 * chapt03, pag050, prog016, prgPrj002.c
 * -------------------------------------
 * write a program that formats product information entered by the user
 *
 * Enter item number: 583
 * Enter unit price: 13.5
 * Enter purchase date (dd/mm/yyyy): 24/10/2010
 *
 * item    unit    purchase
 *         price   date
 * 583     $9.95   24/10/2010
 *
 * the item number and date should be left justified; the unit price should be
 * right justified
 */

#include <stdio.h>

int main(void) {
	int itemNum, purDateDay, purDateMonth, purDateYear;
	float unitPri;

	printf("Enter item number:");
	scanf("%d", &itemNum);
	printf("Enter unit price:");
	scanf("%f", &unitPri);
	printf("Enter purchase date (dd/mm/yyyy):");
	scanf("%d/%d/%d", &purDateDay, &purDateMonth, &purDateYear);

	printf("\nItem\tUnit\tPurchase\n\tPrice\tDate\n");
	printf("%d\t$%-.2f\t%d/%d/%d", itemNum, unitPri, purDateDay, purDateMonth, purDateYear);

return 0;
}
