#include "main.h"

int findStringLength(char *s);
int checkPalindrome(char str[], int st, int end);
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
	return ((checkPalindrome(s, 0, length - 1)));
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
 * checkPalindrome - checks if start and end of string match
 * @str: string input
 * @st: start of string
 * @end: end of string input from is_palindrome, from findStringLength
 * Return: if palidrome
 */
int checkPalindrome(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (checkPalindrome(str, st + 1, end - 1));
	return (1);
}
