#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 * rw = row, cm = column, d = digits of current result
 * Return: times table
 */
void times_table(void)
{
	int rw, cm, d;

	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cm = 1; cm <= 9; cm++)
		{
			d = (rw * cm);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cm < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
