#include "main.h"
/**
 * leet - replaces characters
 * @s: string input
 * Return: string with characters replaced
 */
char *leet(char *s)
{
	int i, j;
	int replace[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == replace[j])
			{
				s[i] = replacer[j / 2];
				j = 9;
			}
		}
	}

	return (s);
}
