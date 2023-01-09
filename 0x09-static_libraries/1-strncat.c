#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: copy destination
 * @src: copy from
 * @n: no of elements to concatenate in
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (count = 0; src[count] != '\0' && n > 0; count++, n--, i++)
	{
		dest[i] = src[count];
	}

	return (dest);
}
