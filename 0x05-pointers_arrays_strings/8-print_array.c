#include <stdio.h>
#include "main.h"

/**
 * print_array - prints no of elements of an array
 * @a: array
 * @n: no of elements of the array
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
