#include "main.h"
/*
 * _islower(int c) - checks for lowercase character
 *
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
