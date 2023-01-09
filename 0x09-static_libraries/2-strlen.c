#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string input
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char str = s[0];

	while (str != '\0')
	{
		sum++;
		str = s[i++];
	}
	return (sum);
}
