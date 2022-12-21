#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: string input
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
