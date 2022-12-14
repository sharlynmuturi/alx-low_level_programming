#include "main.h"
/**
 * print_sign - checks sign of a number
 *@n: number input
 * Return: 1 and prints + if n is positive
 *	0 and prints 0 if n is zero
 *	-1 and prints - if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
