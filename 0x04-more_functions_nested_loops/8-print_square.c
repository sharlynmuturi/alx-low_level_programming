#include "main.h"
/**
 * print_square - Prints a square followed by a new line
 * @size: integer parameter
 * Return: 0
 */
void print_square(int size)
{
	if (size > 0)
	{
		int a = 0;

		while (a < size)
		{
			int b = 0;

			while (b < size)
			{
				_putchar('#');
				b++;
			}
		a++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
