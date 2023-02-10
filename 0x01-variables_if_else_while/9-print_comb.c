#include <stdio.h>

/**
 * main - Prints all possible combos of single digits
 *
 * Return: 0
 */

int main(void)
{
	int combos;

	for (combos = 0; combos <= 9; combos++)
	{
		putchar(combos + '0');
		if (combos < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
