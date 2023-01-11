#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string input1
 * @s2: string input2
 * Return: concatenated strings
 *	 if NULL is passed, treat it as an empty string
 *	The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int ends1, ends2;
	int i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (ends1 = 0; ends1 <= *s1; ends1++)
	{
	}

	for (ends2 = 0; ends2 <= *s2; ends2++)
	{
	}

	array = malloc(sizeof(char) * (ends1 + ends2 + 1));

	if (array == NULL)
		return (NULL);

	while (*s1)
	{
		array[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		array[i] = *s2;
		i++;
		s2++;
	}
	return (array);
}
