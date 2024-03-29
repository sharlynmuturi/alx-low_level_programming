#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: input
 * Return: pointer to the allocated memory
 *	if malloc fails, the malloc_checked function should
 *	cause normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
