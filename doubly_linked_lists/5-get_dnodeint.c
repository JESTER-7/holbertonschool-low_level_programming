#include "lists.h"
/**
 * get_dnodeint_at_index - Returns a specific node of a list
 * @head: head of the list
 * @index: start from 0
 * Return: Pointer to the specific node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head != NULL)
	{
		if (a == index)
			return (head);
		head = head->next;
		a++;
	}
	return (NULL);
}
