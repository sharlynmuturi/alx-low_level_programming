#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 * @size: integer parameter
 * Return: 0
 */

void print_triangle(int size);
{
	if (size > 0)
	{
		int y = 0

		while (y < size)
		{
			space = size - y - 1;
			int x = 0

			while (x < size)
			{
				if (space > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
