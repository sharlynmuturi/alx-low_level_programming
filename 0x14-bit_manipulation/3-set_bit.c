#include "main.h"

/**
 * set_bit - sets value of bit at given index
 * @n: binary number given
 * @index:  index  given
 * Return: 1 if successful -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index  < sizeof(n) *  8)
	{
		*n =  *n | (1 << index);
		return (1);
	}
	return (-1);
}
