#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci
 * Return: fibonnaci numbers
 */
int main(void)
{
	int num;
	unsigned long sum, fib1 = 0, fib2 = 1;

	for (num = 0; num < 97; num++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (num == 96)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
