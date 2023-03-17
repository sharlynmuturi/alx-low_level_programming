#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: pointer of const dlistint_t type
 * Return: list and no of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
