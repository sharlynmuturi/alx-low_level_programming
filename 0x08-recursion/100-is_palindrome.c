#include "main.h"

int findStringLength(char *s);
/**
 * is_palindrome - checks if string is palindrome
 * @s: string input
 * Return: 1 if a string is a palindrome
 *  0 if not.
 */
int is_palindrome(char *s)
{
	int length;

	length = findStringLength(s);

	if (length == 0)
		return (1);
	return (palindrome(s, 0, length -1);
}

/**
 * findStringLength - finds length of string
 * @s: string input
 * Return: size of length
 */
int findStringLength(char *s)
{
	if (*s != '\0')
		return (1 + findStringLength(s + 1));
	return (0);
}

/**
 * palindrome - checks if start and end of string match
 * @string: string input
 * @st: start of string
 * Return: 

 */

