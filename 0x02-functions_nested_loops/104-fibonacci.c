#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci
 * Return: fibonnaci numbers
 */
int main(void)
{
	int num;
	unsigned long sum, fib1 = 0, fib2 = 1;

	for (num = 0; num < 98; num++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;

		printf("%lu", sum);
		printf(", ");
	}
	printf("\n");
	return (0);
}
