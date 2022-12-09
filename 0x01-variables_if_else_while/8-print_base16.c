#include <stdio.h>

/**
 * main - Prints numbers base 16 in lowercase
 *  followed by new line
 * Return: 0
 */

int main(void)
{
	int hexadecimal;
	char letter;

	for (hexadecimal = 0; hexadecimal < 10; hexadecimal++)
		putchar((hexadecimal % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
