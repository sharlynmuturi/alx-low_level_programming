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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
