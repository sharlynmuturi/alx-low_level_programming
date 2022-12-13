#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * divide number by 10 
 * the remainder is the last digit of the number
 * Return: Last digit value
 */

int print_last_digit(int digits)
{
	int rem;

	rem = (digits % 10);

	if (rem < 0)
	{
		rem = (-1 * rem);
	}
	_putchar(rem + '0');
	return (rem);
}
