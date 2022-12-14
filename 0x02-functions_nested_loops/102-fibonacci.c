#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 * separated by comma then space.
 *
 *Return: 0
 */

int main(void)
{
	int n;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (n = 0; n < 50; n++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);

}
