#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string input
 * r are separators
 * Return: caps on first letter after separators
 */
char *cap_string(char *s)
{
	int i, j;
	int upper = 32;
	int r[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - upper;
		}

		upper = 0;

		for (j = 0; j <= 12; j++)
		{
			if (s[i] == r[j])
			{
				j = 12;
				upper = 32;
			}
		}
	}
	return (s);
}
