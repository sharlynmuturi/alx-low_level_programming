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
 * _strncat - concatenates strings with n bytes
 * @dest: destination for concatenation
 * @src: source of string
 * @n: int input for size of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen, a;

	destLen = _strlen(dest);
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[destLen + a] = src[a];
	return (dest);
}

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
	char *ptr;
	int size1, size2;

	if (s1 == NULL)
	{
		s1 == "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	ptr = malloc(((size1 + size2) + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	_strncat(ptr, s1, size1);
	_strncat(ptr, s2, size2);
	ptr += '\0';

	return (ptr);
}
