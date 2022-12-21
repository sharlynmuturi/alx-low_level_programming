#include "main.h"

/**
 * _strncpy - copy string starting from index 0 of dest
 * @dest: string input
 * @src: string input
 * @n: input no of characters to copy over
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

		for (; n > i; i++)
			dest[i] = '\0';

	return (dest);
}
