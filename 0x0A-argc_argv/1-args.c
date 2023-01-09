#include <stdio.h>
#include "main.h"

/**
 * main - prints the no of arguments passed into it
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
