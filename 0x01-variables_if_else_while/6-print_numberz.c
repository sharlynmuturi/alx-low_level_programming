#include<stdio.h>

/**
 * main - Prints single digits starting from 0 using putchar
 *
 * Return: 0
 */

int main(void)
{
	int singledigit;

	for (singledigit = 0; singledigit < 10; singledigit++)
		putchar((singledigit % 10) + '0');

	putchar('\n');

	return (0);
}
