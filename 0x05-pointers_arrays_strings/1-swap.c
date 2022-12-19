#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer input
 * @b: integer input
 * Return: swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
