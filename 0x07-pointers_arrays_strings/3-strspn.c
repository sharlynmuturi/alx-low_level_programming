#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: number of bytes in the initial segment of s
 *  which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, j, c;

	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				j++;
				c = 1;
			}
		}

		if (c == 0)
			return (j);
	}

	return (j);
}
