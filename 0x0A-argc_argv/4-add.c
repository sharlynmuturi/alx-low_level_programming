#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive number
 * @argc: argument count
 * @argv: arguments vector
 * Return: result, followed by a new line
 *	If no num is passed to program, print 0, then new line
 *	If one of the number contains symbols that are not digits
 *	print Error, followed by new line, and return 1
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
