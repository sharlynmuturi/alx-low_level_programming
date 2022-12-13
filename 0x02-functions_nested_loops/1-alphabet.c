#include "main.h"
/*
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
