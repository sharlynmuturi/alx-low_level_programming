#include "main.h"
/**
 * print_diagonal -draws a diagonal line in the terminal
 * @n: integer parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int a = 0;

		while (a < n)
		{
			int b = 0;

			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
