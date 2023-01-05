#include "main.h"

/**
 * factorial - returns factorial of number
 * @n: number input
 * Return: If n is less than 0, return -1 to indicate error
 *  Factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
