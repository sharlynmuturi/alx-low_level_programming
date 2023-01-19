#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes func given as parameter on each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	if (size <= 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
