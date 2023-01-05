#include "main.h"

int primeCheck(int n, int i);
/**
 * is_prime_number - checks if prime
 * @n: integer input
 * Return: returns 1 if input integer is prime number
 *  otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (primeCheck(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * primeCheck - checks for prime
 * @n: number input
 * @i: n / 2, then passes to i - 1, checks if greater than 1
 * Return: primeCheck
 */
int primeCheck(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (primeCheck(n, i - 1));
}
