#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: copy destination
 * @src: copy from
 * @n: input no of characters
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';

	return (dest);
}
