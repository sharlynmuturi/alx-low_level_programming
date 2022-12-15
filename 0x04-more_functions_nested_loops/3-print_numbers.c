#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: numbers
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}

	_putchar('\n');
}
