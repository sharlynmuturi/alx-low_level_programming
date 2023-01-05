#include "main.h"

/**
 * _pow_recursion - returns value of x raised to power y
 * @x: input
 * @y: input
 * Return: if y is less than 0, function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

