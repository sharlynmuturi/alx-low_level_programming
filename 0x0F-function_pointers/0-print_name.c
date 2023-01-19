#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer type char
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || f == NULL)
		return;
	f(name);
}
