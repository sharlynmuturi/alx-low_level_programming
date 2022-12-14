#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
