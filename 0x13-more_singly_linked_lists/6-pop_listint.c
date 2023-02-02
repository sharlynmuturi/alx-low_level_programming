#include "lists.h"
/**
 * pop_listint - removes node from top
 * @head: pointer to head node
 * Return:  the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *top = NULL;
	int value = 0;

	if (*head == NULL)
	{
		return (0);
	}
	top = *head;
	value = top->n;
	*head = top->next;
	free(top);
	return (value);
}
