#include "lists.h"
/**
 * *add_node_end -  adds a new node at the end of a list_t list
 * @head: pointer to pointer of list_t struct type
 * @str: pointer to string input
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *first;
	unsigned int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->str  = strdup(str);
	first->len  = counter;

	if (*head == NULL)
	{
		*head = first;
		first->next = NULL;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = first;
	first->next = NULL;

	return (*head);
}
