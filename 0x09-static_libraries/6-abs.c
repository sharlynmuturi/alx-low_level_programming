#include "main.h"
/**
 * _abs - computes absolute value of integer
 * @ab: integer input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
