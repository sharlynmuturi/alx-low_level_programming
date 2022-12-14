#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @num: input integer
 * Return: absolute value of a number
 * if num is +ve,
 * expression num > 0 is correct, with value of 1
 * while num < 0 is false, with value 0
 * so num *((1-0)) = num * 1
 * and so on
 */

int _abs(int num)
{
	return (num * ((num > 0) - (num < 0)));
}
