#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: listint_t type of node struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
