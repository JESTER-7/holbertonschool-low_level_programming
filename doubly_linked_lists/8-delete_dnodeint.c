#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given location
 * @head: head of the list
 * @index: location of the node, start at 0
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a = *head;
	unsigned int i = 0;

	if (a == NULL)
		return (-1);
	if (index == 0)
	{
		*head = a->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(a);
		return (1);
	}
	while (a != NULL && i < index)
	{
		a = a->next;
		i++;
	}
	if (a == NULL)
		return (-1);
	if (a->next != NULL)
		a->next->prev = a->prev;
	if (a->prev != NULL)
		a->prev->next = a->next;
	free(a);
	return (1);
}
