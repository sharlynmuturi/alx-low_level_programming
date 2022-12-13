#include "main.h"
/**
 * main - Prints _putchar using a function _putchar in our header file main.h
 *
 * Return: 0
 */
int main(void)
{
	char *pchar = "_putchar";

	while (*pchar)
	{
		_putchar(*pchar);
		pchar++;
	}
	_putchar('\n');

	return (0);
}
