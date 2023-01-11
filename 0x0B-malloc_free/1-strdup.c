#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
	int i, endof;
	char *array;

	if (str == NULL)
		return (NULL);

	for (endof = 0; endof <= *str; endof++)
	{
	}

	endof += 1;
	array = malloc(sizeof(char) * endof);

	for (i = 0; i < endof; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
}
