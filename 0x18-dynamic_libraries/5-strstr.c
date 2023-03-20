#include <stdio.h>
#include "main.h"

/**
 * _strstr - finds the 1st occurrence of substring needle in string haystack
 *  The terminating null bytes (\0) are not compared
 * @haystack: input
 * @needle: input
 * Return: pointer to the beginning of the located substring
 *  NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}

		if (*p2 == '\0')
			return (haystack);
	}

	return (NULL);
}
