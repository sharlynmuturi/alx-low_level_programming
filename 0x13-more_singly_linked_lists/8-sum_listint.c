#include "lists.h"

/**
 * sum_listint - sums int values of nodes
 * @head: pointer to head node
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	unsigned int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
