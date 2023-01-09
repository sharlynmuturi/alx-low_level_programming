#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the min no of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: vector to arguments
 * Return: if the number of arguments passed to your program is not exactly 1
 *	print Error, followed by a new line, and return 1
 *	If the number passed as the argument is negative
 *	print 0, followed by a new line
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int cents = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			if (num / coins[i] > 0)
			{
				cents += num / coins[i];
				num = num % coins[i];
			}
		}
		printf("%d\n", cents);
	return (0);
}
