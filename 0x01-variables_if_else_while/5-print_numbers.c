#include <stdio.h>

/**
 * main - Prints single digits of base 10 starting from 0
 *followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int singledigits;

	for (singledigits = 0; singledigits < 10; singledigits++)
		printf("%d", singledigits);

	printf("\n");

	return (0);
}
