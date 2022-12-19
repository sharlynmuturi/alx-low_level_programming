#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * count counts to end, n counts back
 * @s: string output
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int count = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (n = (count - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
