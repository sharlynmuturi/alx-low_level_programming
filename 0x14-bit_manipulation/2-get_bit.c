#include "main.h"
/**
 * get_bit - gets bit at index
 * @n: unsigned long int type
 * @index: unsigned int type
 * Return: value of bit and index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check =  1;

	if (index > sizeof(n) * 8)
		return (-1);
	check <<= index;
	if (check &  n)
		return (1);
	else
		return (0);
}
