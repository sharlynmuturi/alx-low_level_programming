#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy destination
 * @src: copy from
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)

	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)

	return (dest);
}
