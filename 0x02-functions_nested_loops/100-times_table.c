#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: n input
 *
 */
void print_times_table(int n)
{
	int num1, num2, product;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');

			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');

				product = num1 * num2;

				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
