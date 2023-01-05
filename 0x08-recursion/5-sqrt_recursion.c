#include "main.h"

int findnaturalsqrt(int num, int i);
/**
 * findnaturalsqrt - checks natural sqrt of number
 * @num: number input
 * @i: root whose square is to be tested
 * Return: squareroot if input has natural sqrt
 *  -1 if input has no natural sqrt
 */
int findnaturalsqrt(int num, int i)
{
	if ((i * i) == num)
		return (i);

	if (i == num / 2)
		return (-1);

	return (findnaturalsqrt(num, i + 1));
}
/**
 * _sqrt_recursion -  returns natural square root of number
 * @n: number input
 * Return: If n doesn't have natural square root, function return -1
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (findnaturalsqrt(n, i));
}
