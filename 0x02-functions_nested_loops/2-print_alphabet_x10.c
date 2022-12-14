#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: alphabet x10
 */

void print_alphabet_x10(void)
{
	int alpha, n;

	for (n = 0; n <= 9; n++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
