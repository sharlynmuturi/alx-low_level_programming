#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: destination for concatenation
 * @s2: string input
 * @n: size of byte
 * Return: point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int count, count1;
	int sign = n;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (sign >= len2)
	{
		sign = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (count = 0; count < len1; count++)
	{
		ptr[count] = s1[count];
	}
	for (count1 = 0; count1 < sign; count1++)
	{
		ptr[count++] = s2[count1];
	}
	ptr[count++] = '\0';
	return (ptr);
}
