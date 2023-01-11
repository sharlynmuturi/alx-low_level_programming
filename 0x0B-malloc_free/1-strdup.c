#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string type
 * Return: length of a string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	return (a);
}

/**
 * _strdup - returns pointer to newly allocated space in memory
 *	which contains a copy of the string given as a parameter.
 * @str: char
 * Return:  pointer to the duplicated string
 *	NULL if insufficient memory was available
 *	NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	i = 0;
	while (i < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
