#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints all elements
 * @h: listint_t type of node struct
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
