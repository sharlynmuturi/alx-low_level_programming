#include <stdio.h>

/**
 * main -  Prints the sum of even-valued Fibonacci sequenceterms
 * not exceeding 4000000.
 *
 * Return: 0
 */

int main(void)
{
	int num;
	unsigned long fib1 = 0, fib2 = 1, sum, sum2;

	for (num = 0; num <= 50; num++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;

		if (sum < 4000000 && sum % 2 == 0)
		{
			sum2 += sum;
		}
	}
	printf("%lu\n", sum2);
	return (0);
}
