/*
C Programming: A modern approach 2ed.
016 | Pag 050 | Chapter 3 | Programming Project 002 | 016_prgPrjct002.c
by: OOQQ
=======================================
Write a program that formats product information entered by the user. A session with the program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (dd/mm/yyyy): 24/10/2010

Item	Unit	Purchase
	Price	Date
583	$9.95	24/10/2010

The item number and date should be left justified; the unit price should be right justified.
*/

#include <stdio.h>

int main(void)
{
  int item, dateDay, dateMonth, dateYear;
  float price;

  printf("Enter item number: ");
  scanf("%d", &item);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter purchase date (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &dateDay, &dateMonth, &dateYear);

/*
"minimum number of digits to display" added due edge cases that begin with 0's
*/
  printf("\nItem\tUnit\t\tPurchase\n\tPrice\t\tDate\n%d\t$%.2f\t\t%-.2d/%.2d/%.4d", item, price, dateDay, dateMonth, dateYear);

  return 0;
}
