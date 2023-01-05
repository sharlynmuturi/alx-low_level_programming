#include "main.h"

/**
 * _puts_recursion -  prints string, followed by new line
 *  similar function: puts()
 * @s: string input
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
