#include <stdio.h>

/**
 * main - Prints all possible different combinations of two different digits.
 *	in ascending order using putchar
 * Return: 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
