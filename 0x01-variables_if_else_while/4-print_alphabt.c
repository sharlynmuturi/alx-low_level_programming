#include <stdio.h>

/**
 * main - Prints the alphabet except q and e in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
		{
		continue;
		}
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
