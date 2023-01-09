#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: argument count for main
 * @argv: vector to arguments
 * Return:  print the result of the mul then new line
 *	If program doesn't receive two arguments
 *	print Error, followed by new line, and return 1
 */

int main(int argc, char *argv[])
{
	int prod = 0;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
