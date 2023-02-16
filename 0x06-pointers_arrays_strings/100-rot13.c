#include "main.h"
/**
 * rot13 - Entry point
 * @s: string input
 * Return: string encoded
 */
char *rot13(char *s)
{
	int i, j;
	char test[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char res[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; test[j] != '\0'; j++)
		{
			if (s[i] == test[j])
			{
				s[i] = res[j];
				break;
			}
		}
	}
	return (s);
}
