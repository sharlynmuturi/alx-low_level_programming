#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point of program
 * @argc: size of array argv and number of cmd line arguments
 * @argv: array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*operator)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(num1, num2));

	return (0);
}
