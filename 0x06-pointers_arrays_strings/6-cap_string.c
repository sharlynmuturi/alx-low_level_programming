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
	char r[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; r[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
			}
			if (s[i] == r[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
