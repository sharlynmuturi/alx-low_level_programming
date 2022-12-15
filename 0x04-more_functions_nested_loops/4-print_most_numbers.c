#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * except 2 and 4
 * Return: the numbers except 2 and 4
 */

void print_most_numbers(void)
{
	int mostnum;

	for (mostnum = 48; mostnum < 58; mostnum++)
	{
		if (mostnum == 50 || mostnum == 52)
		{
			continue;
		}
		_putchar(mostnum);
	}
	_putchar('\n');
}
