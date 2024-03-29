#include <stdio.h>
/**
 * main - Prints all possible combos of two distinct digits separated by space
 *	ranging from 0-99
 *	each combo separated by comma then space, in ascending order
 * Return: 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			if ((num1 != num2) && (num1 < num2))
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
