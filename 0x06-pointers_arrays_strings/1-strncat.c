#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: copy destination
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	for (i = 0; dest[i] != '\0'; i++)

	for (count = 0; count < n; count++)
	{
		dest[i + count] = src[count];
		if (src[count] == '\0')
			count = n;
	}

	return (dest);
}
