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
		putchar((combos % 10) + '0');
		if (combos == 9)
		{
			continue;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
