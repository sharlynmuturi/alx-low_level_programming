#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to array of type int
 * @size: size of array
 * @cmp: pointer to the func to be used to compare values
 * Return: returns the index of the first element
 *	for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
