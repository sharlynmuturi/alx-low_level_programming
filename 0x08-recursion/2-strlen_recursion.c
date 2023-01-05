#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string input
 * Return: 0, length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
